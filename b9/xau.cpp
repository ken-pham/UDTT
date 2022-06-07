#include<bits/stdc++.h>
using namespace std;
int ask[256]={0};
string xc;
int k,d=0;
string s;
void dem(string s)
{
    for(int i=0;i<s.size();i++)
    {
        ask[s[i]]++;

    }
}
bool comat(char s, string a)
{
    for(int i=0;i<=a.size();i++)
        if(char(a[i])==s) return true;
    return false;
}
void them(string s, char a)
{
    s=s+string(a);
}
void xoa(string s)
{
    s.erase(s.size()-1,1);
}
void ThucHien(int i)
{
    string tam; //Túi để "soi" các ký tự ở vị trí i
    tam[0] = '\0';
    if (xc.size() == k)
    {
        cout<<xc<<endl;
        d++;
    }
    else
    {
        for (int j = i; j < s.size(); j++)
        {
            if (comat(s[j], tam) == false)
            {
                them(tam, s[j]); //thêm s[j] vào "túi" tam
                them(xc, s[j]); //thêm s[j] vào xâu con xc
                ThucHien(j + 1); // thực hiện tiếp |xc|=j+1
                xoa(xc); //xoá ký tự cuối cùng của xâu xc
            }
        }
    }
}

int main()
{
    cout<<"nhap chuoi"<<endl;
    cin>>s;
    cin>>k;
//    dem(s);
//    for(int i=0;i<256;i++)
//        if(ask[i]>0)
//    {
//        cout<<"ki tu "<<char(i)<< " co "<<ask[i]<<" ki tu "<<endl;
//    }
ThucHien(0);

}

