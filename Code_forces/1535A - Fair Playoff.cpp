#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write C++ code here
    int x;
    cin >> x;
    while (x--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int l = max(a, b);
        int r = max(c, d);
        int m = min(a, b);
        int n = min(c, d);
        if (m < r && n < l)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}