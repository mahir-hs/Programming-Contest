#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    long long x;
    int count=0;
    cin>>x;

    while(x!=0)
    {

        if(x%10 == 4 || x%10 == 7)
        {
            count++;

        }
        x/=10;
    }

    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}
