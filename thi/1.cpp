#include<bits/stdc++.h>
using namespace std;
int f[100][100];
struct cn
{
    int s;//  giá phải tra cho công nhân
    int p;//  số lương sản pham làm dươc
};


void Sort(cn a[],int n)
{
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(a[i].s>a[j].s)
                swap(a[i],a[j]);
}
int thamlam(cn a[],int n,int m,int b[])
{
    Sort(a,n);
    int i=1;
    int ans=0;
    while(m > 0 and i<=n)
    {
       b[i]=1;
       m-=a[i].p;
       ans+=a[i].s;
       i++;
    }
    return ans;
}
int main()
{
   int m;
   cout<<"nhap so san pham can lam duoc ";
   cin>>m;
   int n;
   cout<<"nhap so cong nhan ";
   cin>>n;
   cn arr[n];
   int b[n];
   for(int i=1;i<=n;i++)

       cin>>arr[i].s>>arr[i].p;
    // phan a
    int x=thamlam(arr,n,m,b);
    cout<<"theo chien thaut tham lam can cac cong nhan "<<endl;
    for(int i=1;i<=n;i++)
        if(b[i]==1)
            cout<<arr[i].s<<" "<<arr[i].p<<endl;
    cout<<"de duoc tong tien tra nho nhat la "<<x<<" ma van du so luong san pham"<<endl;
    // quy hoach dong
    cout<<"-----------------------------------"<<endl;

}
