#include<bits/stdc++.h>
using namespace std;
struct sv{
	string ten;
	int tuoi;
	float diem;
};
int Max;
sv arr[7]={
			{"SV1",17,7.5},
			{"SV2",18,8.5},
			{"SV3",17,6.5},
			{"SV4",16,7.0},
			{"SV5",17,7.8},
			{"SV6",17,8.0},
			{"SV7",17,7.3}
		};
string a=arr[0].ten,b=arr[6].ten;
string c="";
int l[100][100];
int slove()
{
    for(int i=0;i<=a.size();i++) l[i][0]=0;
    for(int j=0;j<=b.size();j++) l[0][j]=0;
    for(int i=1;i<=a.size();i++)
        for(int j=1;j<=b.size();j++)
            if(a[i-1]==b[j-1])
                l[i][j]=l[i-1][j-1]+1;
            else
                l[i][j]= max(l[i-1][j],l[i][j-1]);
    return l[a.size()][b.size()];

}
void d_max(int dau, int cuoi, int &Max)
{
     int max1,max2;
     if(dau==cuoi)
     {

                  Max=cuoi;
     }
     else
     {

         d_max(dau,(dau+cuoi)/2,max1);
         d_max((dau+cuoi)/2+1,cuoi,max2);
         if(arr[max1].diem > arr[max2].diem)
         Max=max1;
         else
         Max=max2;
     }

}
void tv()
{
    int i=a.size(),j=b.size(),k=0;
    while(l[i][j]!=0)
        {
            if(a[i-1]==b[j-1])
                {
                    c=a[i-1]+c;
                    k++;
                    i--;
                    j--;
                }
            else if(l[i-1][j]>l[i][j-1]) i--;
                    else  j--;
        }
}

void print(){
	for(int i=0;i<7;i++){
		cout<<setw(15)<<arr[i].ten<<setw(5)<<arr[i].tuoi<<setw(5)<<arr[i].diem<<endl;
	}
}
void tim(){
	d_max(0,6,Max);
	for(int i=0;i<7;i++)
        if(arr[i].diem==Max)
            {
                cout<<arr[i].ten<<endl;
                break;
            }

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
int main(){

	print();
	//tim();
	d_max(0,6,Max);
	cout<<arr[Max].ten<<endl;
	int x=slove();
    cout<< "do dai xau con chung dai nhat "<<x<<endl;
    tv();
    cout<<c;
    string t="huong";
    string s=t+"@"+arr[0].ten+arr[1].ten+arr[2].ten+arr[3].ten+arr[4].ten+arr[5].ten+arr[6].ten;
    int z;
    //z=new int[s.size()+1];
    //z_algo(s,z);
    //for(int i=1;i<s.size())
}

