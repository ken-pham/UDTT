#include<bits/stdc++.h>
using namespace std;
void bubblesort(float *a,int n,float *b)
{
    for(int i=0;i<n-1;i++)
        for(int j=n-1;j>i;j--)
            if(b[j]<b[j-1])
            {
                swap(b[j],b[j-1]);
                swap(a[j],a[j-1]);
            }

}
void slove(float *a,float *b,float *ans,int n)
{
    bubblesort(a,n,b);
    float finsh=0;
    for(int i=0;i<n;i++)
        if(a[i]>=finsh)
        {
            ans[i]=1;
            finsh=b[i];
        }
}
int main()
{
    int n;
    cout<<"nhap so luong cong viec ";
    cin>>n;

    float *a,*b,*ans;
    a=new float[n];
    b=new float[n];
    ans=new float[n];
    cout<<"thoi gain bat dau cong viec"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"thoi gian ket thuc cong viec"<<endl;
    for(int i=0;i<n;i++)
        cin>>b[i];

    for(int i=0;i<n;i++)
        ans[i]=0;
    slove(a,b,ans,n);
    cout<<"thoi gain bat dau cong viec"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\nthoi gian ket thuc cong viec"<<endl;
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<"\n---------------------"<<endl;
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";

}

