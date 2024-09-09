#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[1000];

int main()
{
    int n, m;
    cin >> n >> m;
    m %= (n * (n + 1) / 2);
    for (int i = 1; i <= n; ++i)
    {
        if (m < i)
        {
            break;
        }
        m -= i;
    }
    cout << m << endl;


}
