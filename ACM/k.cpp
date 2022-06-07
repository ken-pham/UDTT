#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int y;
    cin>>y;
    int z; cin>>z;
    sort(a,a+n);
    if(z<y)
    int j=lower_bound(a,a+n,y)-a-1;
    for(int i=0;i<=j;i++)
        a[i]=abs(a[i]-z);
    y=
}

