#include <bits/stdc++.h>

using namespace std;
int a[10][10]={0};
int n;
int c[10]={0};
int b[10]={0};
int slove()
{
    for(int i=1;i<=n;i++)
        for(int j=0;j<=n;j++)
        {
            if(j<i)
                a[i][j]=a[i-1][j];
            else
                a[i][j]=a[i-1][j]+a[i][j-i];;
        }
    return a[n][n];
}
int slove2()
{
    for(int i=1;i<=n;i++)
        for(int j=0;j<=n;j++)
        {
            if(j<i)
               b[j]=c[j];
            else
                b[j]=c[j]+b[j-i];
            c[j]=b[j];
        }
    return c[n];
}
int main()
{
    cout<<"nhap n ";
    cin>> n;
    a[0][0]=1;
    c[0]=1;
    cout<<slove()<<endl;
    cout<<slove2()<<endl;
    for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }

}
