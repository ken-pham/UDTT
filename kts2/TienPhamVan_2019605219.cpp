#include<bits/stdc++.h>
using namespace std;
struct lop{
	string GV;
	int SHS;
	int  SHSNu;
	float PC;
};
int Min;
lop arr[7]={
			{"Le Thi An",12,7,100000},
			{"Hoang Văn Bach",11,8,200000},
			{"Le Thi Thuy",9,5,150000},
			{"Pham Văn Tung",20,6,130000},
			{"Phan Thi Thuy",6,6,160000},
			{"Hoang Thuy Duong",7,1,150000},
			{"Phan Van Duc",5,2,120000}
		};
void Tim_lop_SHSNam_min(int dau, int cuoi, int &Min)
{
     int min1,min2;
     if(dau==cuoi)
     {
            Min=cuoi;
     }
     else
     {

         Tim_lop_SHSNam_min(dau,(dau+cuoi)/2,min1);
         Tim_lop_SHSNam_min((dau+cuoi)/2+1,cuoi,min2);
         if(arr[min1].SHS-arr[min1].SHSNu < arr[min2].SHS-arr[min2].SHSNu)
         Min=min1;
         else
         Min=min2;
     }

}
void xuat()
{
    Tim_lop_SHSNam_min(0,6,Min);
    if(arr[Min].SHS-arr[Min].SHSNu==0)
        cout<<"giao vien cua lop khong co hoc sinh nam la " <<arr[Min].GV<<endl;
    else cout<< "khong co lop hoc nao chi toan hoc sinh nu"<<endl;
}
string s="Thi";
void Print(int n)
{
    cout<<setw(25)<<arr[n].GV<<setw(10)<<arr[n].SHS<<setw(10)<<arr[n].SHSNu<<setw(10)<<arr[n].PC<<endl;
}
void z_algo(string s, int *z)
{
    int n = s.size(), l = 0, r = 0;
    for (int i = 1; i < n; i++)
    {
        if (i > r) {
            l = r = i;
        while (r < n && s[r - l]== s[r])
            r++;
        z[i] = r - l;
        r --;
        }
        else if (z[i-1]< r-i+1)
                    z[i] = z[i-l];
             else
                { l = i;
                  while (r < n && s[r - l] == s[r]) r ++;
                  z[i] = r - l;
                  r --;
                }
    }
}
void Slove()
{
    for(int i=0;i<=6;i++)
    {
        string v=s+"@"+arr[i].GV;
        int z[v.size()];
        z[0]=-1;
        z_algo(v,z);
        for(int j=1;j<v.size();j++)
            if(z[j]==3)
            {
                Print(i);
                break;
            }
    }
}
int main()
{
    xuat();
    cout<<"danh sach cac lop giao vien phu trach cos ten dem la Thi la"<<endl;
    cout<<setw(25)<<"Ten giao vien"<<setw(10)<<"so HS"<<setw(10)<<"so HSNu"<<setw(10)<<"phu cap"<<endl;
    Slove();


}
