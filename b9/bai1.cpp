#include<bits/stdc++.h>
 using namespace std;
 int a[100],n;
 int f[100],t[100];
 void slove()
 {
    a[0]=-2147483648;a[n+1]=2147483648;
    f[n+1]=1;
    for (int i=n; i>=0;i--)
    {
        int jmax=n+1;
        for (int j=i+1; j<=n+1; j++)
        {
           if(a[j]>a[i] && f[j]>f[jmax])
            jmax=j;
        }
       f[i]=f[jmax]+1;
       t[i]=jmax;
    }
 }
 void tv()
 {
     int k=t[0];
     cout<<"day con"<<endl;
     while(k!=n+1)
     {
         cout<<a[k]<<" ";
         k=t[k];
     }
 }
 int main()
 {
    cout<<"nhap n ";
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    slove();
    tv();
 }

