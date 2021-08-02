#include <iostream>
#include <string.h>
using namespace std;
int check[109];
int main()
{
    int x,a,b,c,i,j,k=0,l=0;
    long long int arr[1002];
    cin>>x;

    for(i=0; i<x; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            k=arr[i];
            arr[i]=arr[i]-1;
        }
    }
    for(i=0; i<x; i++)
    {
        cout<<arr[i]<<" ";
    }

}
