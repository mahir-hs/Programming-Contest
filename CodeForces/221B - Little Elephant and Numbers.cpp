/***
 created: 2022-10-06-19.03.48
***/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename U> using ordered_set = tree<U, null_type, less<U>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'
#define pb push_back
#define vii vector<int>
#define all v.begin(), v.end()

void solve()
{
    ll a;
    cin >> a;


    vii v;

    for (int i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            int x = a / i;
            v.pb(i);
            if (x != i)
                v.pb(x);
        }
    }
    //v.pb(a);

    string s = to_string(a);
    map<char, int>m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    int ans = 0;
    for (auto k : v)
    {
        string ss =  to_string(k);

        bool ok = false;
        for (int i = 0; i <  ss.size(); i++)
        {
            if (m[ss[i]])
            {
                ok = true;
                break;
            }
        }

        if (ok)
            ans++;
    }

    cout << ans << nl;

}





int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
#endif


    // int t;
    // cin >> t;

    // while (t--)
    // {
    //     solve();
    // }


    solve();



}