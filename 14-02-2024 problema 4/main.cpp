#include <iostream>

using namespace std;

int main()
{
    int a[100][100],i,j,m,n,mini=99,minj=99,maxi=0,maxj=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
            if(i>maxi)
                maxi=i;
            if(j>maxj)
                maxj=j;
            if(i<mini)
                mini=i;
            if(j<minj)
                minj=j;
            }
        }
    }
    for(i=mini;i<=maxi;i++)
    {
        for(j=minj;j<=maxj;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
