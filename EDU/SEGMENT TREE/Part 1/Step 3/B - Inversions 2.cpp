#include <bits/stdc++.h>
using namespace std;

//using u128 = __uint128_t;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll int
#define EPS 1e9
#define MV 1e18
#define MX 100000009
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define vul vector<ull>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pip pair<int, pii>
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define qii queue<int>
#define dii deque<int>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp mate_pair
#define nl '\n'
#define SP(x, y) fixed << setprecision((x)) << (y)
#define INF 0x3F3F3F3F
#define ff first
#define ss second
#define sz(s) s.size()

// clock_t startTime;
// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// double getCurrentTime()
// {
//     return (double)(clock() - startTime) / CLOCKS_PER_SEC;
// }

// #ifndef ONLINE_JUDGE
// freopen("input.in", "r", stdin);
// freopen("output.out", "w", stdout);
// #endif

int fx[] = {0, 1, 0, -1};
int fy[] = { -1, 0, 1, 0};
int tr[] = { -2, -2, -1, -1, 1, 1, 2, 2};
int tc[] = { -1, 1, -2, 2, -2, 2, -1, 1};

/// cout<<"Case "<<z++<<": "<<__<<endl;

// typedef bool (*comp)(pii, pii);

//******************************** Template ***********************
template <class T>
inline T bitOn(T n, T pos) {
    return n | ((T)1 << pos);
}
template <class T>
inline T bitOff(T n, T pos) {
    return n & ~((T)1 << pos);
}
template <class T>
inline T isOn(T n, T pos) {
    return (bool)(n & ((T)1 << pos));
}

template <class T>
istream &operator>>(istream &is, vector<T> &input)
{
    for (T &in : input)
        is >> in;
    return is;
}

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/Tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
// using namespace __gnu_cxx;


// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T>
// using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(?) : return count of values which is < ?
// find_by_order(?): access the ? index in set

//******************************** Template ***********************

//******************************** Function ***********************
ull toDecimal(string bin)
{
    unsigned long deci = std::bitset<16>(bin).to_ulong(); // binary string to decimal
    return deci;
}
string toBinary(ll decimal)
{
    std::string binary = std::bitset<16>(decimal).to_string(); // to binary
    return binary;
}
// bool is(int x, int y)
// {
//     if (x >= 0 && y >= 0 && vis[x][y] == false) // out of box or not
//         return true;
//     return false;
// // }
///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////




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
            Tree[node] = 1;
            return;
        }

        int left = 2 * node;
        int right = 2 * node + 1;
        int mid = (b + e) / 2;
        init(left, b, mid);
        init(right, mid + 1, e);
        Tree[node] = Tree[left] + Tree[right];
    }

    int query(int node, int b, int e, int x)
    {

        if (b == e)
        {
            return b; //রিলেভেন্ট সেগমেন্ট
        }

        int left = node * 2; //আরো ভাঙতে হবে
        int right = node * 2 + 1;
        int mid = (b + e) / 2;


        if (Tree[right] > x)
            return query(right, mid + 1, e, x);
        else
            return query(left, b, mid, x - Tree[right]);


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


    int a;
    cin >> a;

    vii v(a);
    cin >> v;
    st.init(1, 1, a);
    reverse(all(v));
    vii ans;
    for (int i = 0; i < a; i++)
    {
        int xx = v[i];
        int now  = st.query(1, 1, a, xx);
        st.update(1, 1, a, now, 0);
        ans.pb(now);

    }

    reverse(all(ans));

    for (auto k : ans)
        cout << k << " ";
    cout << nl;



}



int main()
{

    FIO;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    // int t;
    // cin >> t;
    // while (t--)
    //     solve();

    solve();



    // fprintf(stderr, "\n>> Runtime: % .10fs\n", (double)(clock() - startTime) / CLOCKS_PER_SEC);
}
