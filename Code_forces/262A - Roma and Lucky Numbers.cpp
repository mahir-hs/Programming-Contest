#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
int gv[1000];

int main()
{
    int n, k, count=0;
    cin >> n >> k;

    string s;
    while (n--)
    {
        int lucky=0;
        cin >> s;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '4' || s[i] == '7')
            {
                lucky += 1;
            }
        }
        if (lucky <= k)
        {
            count += 1;
        }
    }
    cout << count << endl;

}
