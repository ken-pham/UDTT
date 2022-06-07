#include<bits/stdc++.h>
using namespace std;
int slove(int *a,int n,int m)
{
    int i=0,ans=0;
    while(n>0 and i<m)
    {
        if(n>=a[i])
        {
            n-=a[i];
            ans++;
        }
        else break;
        i++;
    }
    return ans;
}
int main()
{
    int n,m;
    cout<<"nhap so luong nuoc ";
    cin>>n;
    cout<<"nhap so luong chai ";
    cin>>m;
    int *a;
    a=new int[m];
    cout<<"nhap kich co chai"<<endl;
    for(int i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);
    cout<<"so chai toi da co the day la "<<slove(a,n,m);


}
