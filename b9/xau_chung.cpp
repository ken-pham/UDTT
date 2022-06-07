#include<bits/stdc++.h>
using namespace std;
string a="1234567890125367812",b="39034034527534535";
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
int main()
{

    int x=slove();
    cout<< "do dai xau con chung dai nhat "<<x<<endl;
    tv();
    cout<<c;

}
