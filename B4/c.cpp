#include<bits/stdc++.h>
#define Maxs 100

using namespace std;
long long *d;
long long fibonaci(int n)
{
    if(n==1 or n==2)
        d[n]=1;
    else if(d[n] < 1)
        d[n] = fibonaci(n-1)+fibonaci(n-2);
    return d[n];
}

int main()
{
    int n;
    cout<<"nhap n ";
    cin>>n;
    d=new long long[n];
    for(int i=0;i<=n;i++)
        d[i]=0;
    cout<<fibonaci(n);
}
