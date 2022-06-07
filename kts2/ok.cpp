#include <bits/stdc++.h>
using namespace std;
struct SanPham{
	string maSP;
	string tenSP;
	int KL;
	int GT;
};
SanPham SP[8]= {
    {"SP03","But bi",10,6000},
    {"SP06","But chi",60,9000},
    {"SP04","Compa",30,5000},
    {"SP07","Kinh",70,4000},
	{"SP01","Sach",50,5000},
	{"SP05","Thuoc",40,8000},
	{"SP02","Vo",20,3000}
};
SanPham x={"SP08","Tay",11,5000};
int Chia_De_Chi(int l,int r)
{
    if(l==r)
        return l;
    else
    {
        int m=(l+r)/2;
        if(SP[m].tenSP<x.tenSP) return Chia_De_Chi(m,r);
        if(SP[m].tenSP>x.tenSP) return Chia_De_Chi(l,m-1);
    }
}
void chen()
{
    int v=Chia_De_Chi(0,6);
    for(int i=7;i>v;i++)
        SP[i]=SP[i-1];
    SP[v]=x;
}
int main()
{
    chen();
    for(int i=0;i<8;i++)
        cout<<SP[i].tenSP<<endl;
}
