#include<bits/stdc++.h>
using namespace std;

int main()
{

    int num[100],n,i;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    int flag = 0;
    for(i=0; i<n; i++)
    {
        if(num[i]==1)
        {
            flag = 1 ;
            break;
        }
    }
    if(flag==1)
    {
        printf("HARD\n");
    }
    else
        printf("EASY\n");

    return 0;

}
