#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 20005
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
int col, row;
char c[22][22];
int chk[22][22];
int px[] = {0, 0, 1, -1};
int py[] = {1, -1, 0, 0};
int bfs(int sx, int sy)
{
  queue<pii> q;
  int ans = 1;
  q.push(mp(sx, sy));
  chk[sx][sy] = 1;
  while (!q.empty())
  {
    int ax = q.front().first;
    int ay = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++)
    {
      int a = ax + px[i];
      int b = ay + py[i];
      if (a >= 0 && a < col && b >= 0 && b < row && chk[a][b] != 1 && c[a][b] != '#')
      {
        ans++;
        chk[a][b] = 1;
        q.push(mp(a, b));
      }
    }
  }
  return ans;
}

int main()
{
  ll x, kk = 1;
  cin >> x;
  while (x--)
  {
    int sx, sy;
    cin >> row >> col;
    memset(chk, 0, sizeof chk);

    for (int i = 0; i < col; i++)
    {
      for (int j = 0; j < row; j++)
      {
        cin >> c[i][j];
        if (c[i][j] == '@')
        {
          sx = i;
          sy = j;
        }
      }
    }

    cout << "Case " << kk++ << ": " << bfs(sx, sy) << endl;
  }
}