#include <iostream>
#include <vector>

using namespace std;

class RMQ
{
public:
    RMQ(vector<int> v)
    {
        log_table.assign(v.size() + 1, 0);
        for (int i = 2; i < log_table.size(); i++)
            log_table[i] = log_table[i / 2] + 1;

        sparse_table.assign(log_table.back() + 1, vector<int>(v.size()));
        sparse_table[0] = v;
        for (int row = 1; row < sparse_table.size(); row++)
        {
            for (int i = 0; i + (1 << row) <= v.size(); i++)
            {
                sparse_table[row][i] = min(sparse_table[row - 1][i], sparse_table[row - 1][i + (1 << (row - 1))]);
            }
        }
    }

    int minimum(int l, int r)
    {
        int log = log_table[r - l];
        return min(sparse_table[log][l], sparse_table[log][r - (1 << log)]);
    }

private:
    vector<int> log_table;
    vector<vector<int>> sparse_table;
};

vector<int> adj[100005];
vector<int> euler_tour;
vector<int> first_encounter;
vector<int> new_to_old;

void dfs_euler_tour(int v, int p)
{
    int new_index = new_to_old.size();
    new_to_old.push_back(v);
    first_encounter[v] = euler_tour.size();
    euler_tour.push_back(new_index);

    for (int u : adj[v])
    {
        if (u == p)
            continue;

        dfs_euler_tour(u, v);
        euler_tour.push_back(new_index);
    }
}

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int nodes;
        cin >> nodes;
       

        for (int i = 1; i <= nodes;i++)
        {
            int b;
            cin >> b;
            for (int j = 0; j < b;j++)
            {
                int c;
                cin >> c;
                adj[i].push_back(c);
                adj[c].push_back(i);
            }
        }

        first_encounter.resize(nodes);
        dfs_euler_tour(1, -1);
        RMQ rmq(euler_tour);
    }
    int nodes = 10;
   

    int u, v;
    cin >> u >> v;
    int fe1 = first_encounter[u];
    int fe2 = first_encounter[v];
    if (fe1 > fe2)
        swap(fe1, fe2);
    int LCA_new_index = rmq.minimum(fe1, fe2 + 1);
    int LCA_old_index = new_to_old[LCA_new_index];
    cout << "LCA_new_index: " << LCA_new_index << endl;
    cout << "LCA_old_index: " << LCA_old_index << endl;
}