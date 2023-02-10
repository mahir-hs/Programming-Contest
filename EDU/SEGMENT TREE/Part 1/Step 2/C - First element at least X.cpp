#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 2000056
#define pb push_back
#define nl '\n'



int v[mx];
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
        Tree[node] = max(Tree[left], Tree[right]);
    }

    int query(int node, int b, int e, int i, int j)
    {
        if (i > e || j < b)
            return -mx; //বাইরে চলে গিয়েছে
        if (b >= i && j >= e)
        {
            return Tree[node]; //রিলেভেন্ট সেগমেন্ট
        }

        int left = node * 2; //আরো ভাঙতে হবে
        int right = node * 2 + 1;
        int mid = (b + e) / 2;
        int leftQ = query(left, b, mid, i, j);
        int rightQ = query(right, mid + 1, e, i, j);

        return max(leftQ, rightQ); //বাম এবং ডান পাশের যোগফল
    }

    void update(int node, int b, int e, int i, int val)
    {
        if (i < b or i > e)
            return; //বাইরে চলে গিয়েছে
        if (b == i and e == i)
        {
            Tree[node] = val; //রিলেভেন্ট সেগমেন্ট
            return;
        }

        int left = node * 2; //আরো ভাঙতে হবে
        int right = node * 2 + 1;
        int mid = (b + e) / 2;
        update(left, b, mid, i, val);
        update(right, mid + 1, e, i, val);
        Tree[node] = max(Tree[left], Tree[right]);
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
            int idx, val;
            cin >> idx >> val;
            idx++;
            st.update(1, 1, n, idx, val);
        }
        if (x == 2)
        {
            int val;
            cin >> val;
            int l = 1, r = n;
            int ans = n;

            while (l <= r)
            {
                int mid = (l + r) / 2;

                int now = st.query(1, 1, n, l, mid);
                //cout << now << nl;
                if (now < val)
                {
                    l = mid + 1;
                }
                else
                {
                    ans = min(mid - 1, ans);
                    r = mid - 1;
                }
            }

            if (ans == n)
                cout << -1 << nl;
            else
                cout << ans  << nl;
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