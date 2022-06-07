#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int*a,int l,int r,int k)
{
    if(l>r) return false;
    int mid=(l+r)/2;
    if(k==a[mid])
        return true;
    if(k<a[mid]) return binarysearch(a,l,mid-1,k);
    if(k>a[mid]) return binarysearch(a,mid+1,r,k);

}
int main()
{
    int n,k;
    cout<<"nhap so luong phan tu ";
    cin>>n;
    cout<<"nhap so can tim ";
    cin>>k;
    int *a;
    a=new int[n];
    cout<<"nhap cac phan tu"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(binarysearch(a,0,n-1,k))
        cout<<"ton tai so "<<k<<" trong mang";
    else
        cout<<"khong ton tai so "<<k<<"trong mang";



}

