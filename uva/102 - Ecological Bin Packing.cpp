#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 2000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
using namespace std;
///cout<<"Case "<<z++<<": "<<__<<endl;
int main()
{
    int b[3], g[3], c[3], tmp, small;
    char x, y, z;
    while (cin >> b[0] >> g[0] >> c[0] >> b[1] >> g[1] >> c[1] >> b[2] >> g[2] >> c[2])
    {
        small = b[1] + b[2] + g[0] + g[1] + c[0] + c[2]; //BCG
        x = 'B';
        y = 'C';
        z = 'G';
        tmp = b[1] + b[2] + g[0] + g[2] + c[0] + c[1]; //BGC
        if (tmp < small)
        {
            x = 'B';
            y = 'G';
            z = 'C';
            small = tmp;
        }

        tmp = b[0] + b[2] + g[0] + g[1] + c[1] + c[2];//CBG
        if(tmp<small)
        {
            small = tmp;
            x = 'C';
            y = 'B';
            z = 'G';
        }

        tmp = b[0] + b[1] + g[0] + g[2] + c[1] + c[2];//CGB
        if (tmp < small)
        {
            small = tmp;
            x = 'C';
            y = 'G';
            z = 'B';
        }

        tmp = b[0] + b[2] + g[1] + g[2] + c[0] + c[1]; //GBC
        if (tmp < small)
        {
            small = tmp;
            x = 'G';
            y = 'B';
            z = 'C';
        }

        tmp = b[0] + b[1] + g[1] + g[2] + c[0] + c[2]; //GCB
        if (tmp < small)
        {
            small = tmp;
            x = 'G';
            y = 'C';
            z = 'B';
        }

        cout << x << y << z << " " << small << endl;
    }
}