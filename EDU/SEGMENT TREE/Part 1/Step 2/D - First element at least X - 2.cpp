#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 2000056
#define pb push_back
#define nl '\n'

int v[mx];
int ans = 0;
struct ST {
    int Tree[mx * 4];
    ST()
    {
        memset(Tree, 0, sizeof(Tree));
    }
    void init(int node, int b, int e)
    {
        if (b == e)
        {
            Tree[node] = v[b];
            return;
        }

        int left = 2 * node;
        int right = 2 * node + 1;
        int mid = (b + e) / 2;
        init(left, b, mid);
        init(right, mid + 1, e);
        Tree[node] = max(Tree[left] , Tree[right]);
    }

    void query(int node, int b, int e, int i,  int val)
    {
        if (Tree[node] < val)
            return;
        if (ans > 0 or e < i)
            return ; //বাইরে চলে গিয়েছে
        if (b == e)
        {
            if (Tree[node] >= val)
                ans = b;
            return; //রিলেভেন্ট সেগমেন্ট
        }

        int left = node * 2; //আরো ভাঙতে হবে
        int right = node * 2 + 1;
        int mid = (b + e) / 2;
        query(left, b, mid, i, val);
        query(right, mid + 1, e, i, val);

        return ; //বাম এবং ডান পাশের যোগফল
    }

    void update(int node, int b, int e, int i, int val)
    {
        if (i < b or i > e)
            return; //বাইরে চলে গিয়েছে
        if (b >= i and e <= i)
        {
            Tree[node] = val; //রিলেভেন্ট সেগমেন্ট
            return;
        }

        int left = node * 2; //আরো ভাঙতে হবে
        int right = node * 2 + 1;
        int mid = (b + e) / 2;
        update(left, b, mid, i, val);
        update(right, mid + 1, e, i, val);
        Tree[node] = Tree[left] + Tree[right];
    }
} st;

void solve()
{
    /*

     */

    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    st.init(1, 1, n);

    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int i, val;
            cin >> i >> val;
            i++;
            st.update(1, 1, n, i, val);
        }
        else
        {
            int val, idx;
            cin >> val >> idx;
            idx++;

            ans = 0;
            st.query(1, 1, n, idx, val);
            cout << ans - 1 << nl;

        }
    }




}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    solve();



}