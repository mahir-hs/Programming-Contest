#include <bits/stdc++.h>
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define nl '\n'
#define INF 0x3F3F3F3F
int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {

        int a, b;
        cin >> a >> b;
        long long v[a + 1][b + 1];
        int x = 0, y = 0;
        long long now = -INF;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> v[i][j];
                if (v[i][j] > now)
                {
                    now = v[i][j];
                    x = i + 1;
                    y = j + 1;
                }
            }
        }

        int xx = abs(1 - x) + 1;
        int yy = abs(1 - y) + 1;

        int xxx = abs(1 - x) + 1;
        int yyy = abs(b - y) + 1;

        int xxxx = abs(a - x) + 1;
        int yyyy = abs(1 - y) + 1;

        int xxxxx = abs(a - x) + 1;
        int yyyyy = abs(b - y) + 1;

        int f = xx * yy;
        int s = xxx * yyy;
        int th = xxxx * yyyy;
        int ls = xxxxx * yyyyy;

        cout << max({f, s, th, ls}) << nl;
    }
}