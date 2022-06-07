#include<bits/stdc++.h>
#define MAX 1000000007
using namespace std;
long long pows(int n)
{
    long long ans;
    for(int i=1;i<=n;i++)
        ans*=10;
    return ans;
}
int dem(long long n)
{
    int d=0;
    while(n>0)
    {
        n/=10;
        d++;
    }
    return d;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,n,m,ans=1;
        cin>>x>>n>>m;
        int d=dem(x);
        long long res=pows(d);
        long long c=x;
        cout<<c<<" "<<res<<endl;
        while(c<m)
        {
            c=c*res+x;
            ans++;

        }
        cout<<c<<endl;
        c=c%m;
        cout<<c<<endl;
        n=n%ans;
        cout<<n<<endl;
        c=(c+x*n)%m;
        cout<<c;
    }
}
