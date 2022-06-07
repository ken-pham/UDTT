#include<bits/stdc++.h>
using namespace std;
int f[100][100];
int n,m,w[100],v[100];
void slove()
{
    for(int i=0;i<=m;i++)
        f[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            f[i][j]=f[i-1][j];
            int temp=f[i-1][j-w[i]]+v[i];
            if(w[i]<=j and f[i][j]< temp)
                f[i][j]=temp;
        }
    }
}
void result()
{
    cout<<"max value"<<f[n][m]<<endl;
    int i=n,j=m;
    while (i!=0)
    {
        if (f[i][j]!=f[i-1][j])
            {
                cout<<i<<" ";
                j=j-w[i];
            }
        i--;
    }
}
int main()
{
    cout<<"nhap so luong goi hang ";
    cin>>n;
    cout<<"nhap kich co balo ";
    cin>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>v[i];
    }
    cout<<"----------------------------------------------"<<endl;
    slove();
    for(int i=1;i<=n;i++)
        cout<<w[i]<<" ";
    cout<<endl;
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    cout<<"----------------------------------------------"<<endl;
    result();
}
