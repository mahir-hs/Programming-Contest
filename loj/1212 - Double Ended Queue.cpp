#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 210
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
    int x, kk = 1;
    cin >> x;
    while (x--)
    {
        int y, z;
        cin >> y >> z;
        cout << "Case " << kk << ":" << endl;
        kk++;
        deque<int> d;
        while (z--)
        {
            string s;
            int a;
            cin >> s;
            if (s == "pushLeft" || s == "pushRight")
            {
                cin >> a;
                if (d.size() == y)
                {
                    cout << "The queue is full" << endl;
                    continue;
                }
                else
                {

                    if (s == "pushRight")
                    {
                        cout << "Pushed in right: " << a << endl;
                        d.pb(a);
                    }
                    else
                    {
                        cout << "Pushed in left: " << a << endl;
                        d.push_front(a);
                    }
                }
            }
            else
            {
                if (d.size() == 0)
                {
                    cout << "The queue is empty" << endl;
                    continue;
                }
                else
                {
                    if (s == "popRight")
                    {
                        int b = d.back();
                        cout << "Popped from right: " << b << endl;
                        d.pop_back();
                    }
                    else
                    {
                        int b = d.front();
                        cout << "Popped from left: " << b << endl;
                        d.pop_front();
                    }
                }
            }
        }
    }
}