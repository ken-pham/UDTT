#include<bits/stdc++.h>
using namespace std;
struct hang{
	string maGoi;
	int khoiLuong;
	int giaTien;
};
int m=100,n=5;
int f[6][101];
hang arr[6]={
			{"GH001",10,10000},
			{"GH002",20,20000},
			{"GH005",30,50000},
			{"GH004",60,30000},
			{"GH003",40,40000}
		};
int callback(hang a,hang b){
	return a.maGoi.compare(b.maGoi)<0;
}
void chen()
{
    for(int i=5;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]={"0",0,0};
}
void xoa()
{
    for(int i=0;i<5;i++)
        arr[i]=arr[i+1];

}
void cp()
{

}
void sapxep(){
	sort(arr,arr+5,callback);
}
void print(){
	for(int i=0;i<5;i++){
		cout<<arr[i].maGoi<<"\n";
	}
}
int tim(int l,int r,string x){
	if(l>r)return -1;
	int m = (l+r)/2;
	if(arr[m].maGoi.compare(x)==0)return m;
	else if(arr[m].maGoi.compare(x)>0)return tim(l,m-1,x);
	else return tim(m+1,r,x);
}
void slove()
{
    chen();
    for(int i=0;i<=m;i++)
        f[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            f[i][j]=f[i-1][j];
            int temp=f[i-1][j-arr[i].khoiLuong]+arr[i].giaTien;
            if(arr[i].khoiLuong <=j and f[i][j]< temp)
                f[i][j]=temp;
        }
    }
    xoa();
}
void result()
{
    cout<<"max value   "<<f[n][m]<<endl;
    int i=n,j=m;
    while (i!=0)
    {
        if (f[i][j]!=f[i-1][j])
            {
                cout<<i<<" ";
                j=j-arr[i].khoiLuong;
            }
        i--;
    }
}
int main(){
	sapxep();
	cout<<"Danh sach sau khi sap xep theo ten: \n";
	print();
	string mh="GH003";
	slove();
	result();
	cout<<tim(0,4,mh)<<endl;
}
