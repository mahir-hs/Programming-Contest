#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
    int i,j,k,x,z=0;
    cin>>x;
    while(x--)
    {
        z=0;
        cin>>str;
        for(i=0; i<str.size(); i+=2)
        {
            if((str[i]=='x' && str[i+1]=='y')|| (str[i]=='y' && str[i+1]=='x'))
            {
                z++;
            }
            else  if((str[i]=='x' && str[i+1]=='x')|| (str[i]=='y' && str[i+1]=='y'))
            {
                i--;
            }

        }
        cout<<z<<endl;
    }

}
