#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/Tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>

// using namespace __gnu_pbds;
// using namespace __gnu_cxx;
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long int
#define ull unsigned ll
#define EPS 1e-12
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
#define mod 1000000007
#define INF 0x3F3F3F3F

clock_t startTime;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

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
// }
///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////



ll arr[mx];
ll tree[mx << 4];



void init(int vertex, int l, int r)
{
    if (l == r)
    {
        tree[vertex] = arr[l];
        return;
    }

    int mid = (l + r) / 2;
    int left = vertex * 2;
    int right = vertex * 2 + 1;
    init(left, l, mid);
    init(right, mid + 1, r);
    int goleft = tree[2 * vertex];
    int goright = tree[2 * vertex + 1];
    tree[vertex] = goleft +  goright;
}

void update(int vertex, int l, int r, int i)
{
    if (l > i or i > r)
        return;
    if (l >= i and r <= i)
    {
        if (arr[i] == 1)
        {
            tree[vertex] = 0;
            arr[i] = 0;
        }
        else
        {
            tree[vertex] = 1;
            arr[i] = 1;
        }
        return;
    }

    int mid = (l + r) / 2;
    int left = vertex * 2;
    int right = vertex * 2 + 1;
    update(left, l, mid, i);
    update(right, mid + 1, r, i);
    int goleft = tree[2 * vertex];
    int goright = tree[2 * vertex + 1];
    tree[vertex] = goleft +  goright;
}

int query(int vertex, int l, int r, int i)
{
    if (i > tree[vertex])
    {
        return -1;
    }
    if (l == r )
        return r - 1;

    int mid = (l + r) / 2;
    int left = vertex * 2;
    int right = vertex * 2 + 1;
    if (tree[left] >= i)
        return query(left, l, mid, i);
    else
        return query(right, mid + 1, r, (i - tree[left]));




}



void solve()
{
    /*
     */

    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= a; ++i)
    {
        /* code */
        cin >> arr[i];
    }

    init(1, 1, a);



    while (b--)
    {
        int m, n;
        cin >> m >> n;
        if (m == 1)
            update(1, 1, a, n + 1);
        else
            cout << query(1, 1, a, n+1 ) << nl;
    }



}






int main()
{
    FIO;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // startTime = clock();
    // int t;
    // cin >> t;
    // while (t--)
    //{
    solve();
    //}

    // fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - startTime) / CLOCKS_PER_SEC);
}