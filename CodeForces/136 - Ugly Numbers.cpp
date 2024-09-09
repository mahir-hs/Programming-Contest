#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 2000005
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
using namespace std;
bool valcheck(int x)
{
    while (x % 2 == 0)
        x /= 2;
    while (x % 3 == 0)
        x /= 3;
    while (x % 5 == 0)
        x /= 5;
   if (x == 1)
   {
       return 1;
   }
   else return 0;
}
int main()
{
    // ll x = 0, cnt = 1;
    // for (int i = 1; cnt <= 1500; i++)
    // {
    //     x++;
    //     if (valcheck(x))
    //     {
    //         cnt++;
    //     }
    // }
    // cout << "The 1500'th ugly number is " << x << ".";
    cout << "The 1500'th ugly number is 859963392."<<endl;
}
