#include <bits/stdc++.h>

using namespace std;
int a[9],b[17],c[17],x[9];
void Xuat()
{
    int a[9][9]={0};
    for(int i=1;i<=8;i++)
        a[i][x[i]]=1;
    for(int i=1;i<=8;i++)
        {
        for(int j=1;j<=8;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
        }
    cout<<"-----------------------"<<endl;
}

void Try (int i)  {
    int j;
    for (j = 1; j <= 8; j++)  {
        if (a[j] == 0 && b[i+j] == 0 && c[i-j] == 0)  {
            x[i] = j;  a[j] = 1;  b[i+j] = 1;  c[i-j] = 1;
            if (i < 8)  {
                Try(i+1);
                a[j] = 0;  b[i+j] = 0;  c[i-j] = 0;
            }
            else  {

                Xuat();
                a[j] = 0;  b[i+j] = 0;  c[i-j] = 0;
            }
        }  }
}
int main()
{
    Try(1);
}
