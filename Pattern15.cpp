#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,i,j;
   int k=n-1;
    for(i=1;i<=n;i++)
    {
    
    int x=1;
        for(j=1;j<=k;j++)
        {
            cout<<" ";
        }

        k--; 

        for(j=1;j<=2*i-1;j++)
        {
            cout<<x++;
        }

        cout<<endl;
    }

    k=1;
    for(i=1;i<=n-1;i++)
    {
        int x=1;
        for(j=1;j<=k;j++)
        cout<<" ";

        k++;
        
        for(j=1;j<=2*(n-i)-1;j++)
            cout<<x++;
        cout<<endl;
    }
    return 0;
}