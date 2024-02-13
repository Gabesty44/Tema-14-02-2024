#include <iostream>

using namespace std;

int main()
{
    int a[100][100],i,j,n,v,q;
    cin>>n>>v>>q;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==0 || i==1) && (j==0 || j==1))
                a[i][j]+=(v*q);
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
