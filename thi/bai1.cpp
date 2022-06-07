#include<bits/stdc++.h>
using namespace std;
int f[100][100];
struct th
{
    int m;
    int p;
};

void dp(int n,int m, th a[])
{
    for(int i=0;i<=m;i++)
        f[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            f[i][j]=f[i-1][j];
            int temp=f[i-1][j-a[i].m]+a[i].p;
            if(a[i].m<=j and f[i][j]< temp)
                f[i][j]=temp;
        }
    }
}
void result(int n, int m, th a[])
{
    cout<<"gia tri lon nhat xe tai co the cho duoc maf khong vuot qua trong tai "<<f[n][m]<<endl;
    int i=n,j=m;
    while (i!=0)
    {
        if (f[i][j]!=f[i-1][j])
            {
                cout<<a[i].m<<" "<<a[i].p<<endl;
                j=j-a[i].m;
            }
        i--;
    }
}
void Sort(th a[],int n)
{
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(a[i].p<a[j].p)
                swap(a[i],a[j]);
}
int thamlam(th a[],int n,int m,int b[])
{
    Sort(a,n);
    int i=1;
    int ans=0;
    while(m >= a[i].m and i<=n)
    {
       b[i]=1;
       m-=a[i].m;
       ans+=a[i].p;
       i++;
    }
    return ans;
}
int main()
{
   int m;
   cout<<"nhap trong tai xe ";
   cin>>m;
   int n;
   cout<<"nhap so thung hang ";
   cin>>n;
   th arr[n];
   int b[n];
   for(int i=1;i<=n;i++)
       //nhap khoi luong va gia tri cua thung hang
       cin>>arr[i].m>>arr[i].p;
    // phan a
    int x=thamlam(arr,n,m,b);
    cout<<"theo chien thaut tham lam cos the cho cac thung hang "<<endl;
    for(int i=1;i<=n;i++)
        if(b[i]==1)
            cout<<arr[i].m<<" "<<arr[i].p<<endl;
    cout<<"de duoc gia tri lon nhat la "<<x<<" ma khong vout qua trong tai xe"<<endl;
    // quy hoach dong
    cout<<"-----------------------------------"<<endl;
    dp(n,m,arr);
    result(n,m,arr);
N

}
