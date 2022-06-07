#include<bits/stdc++.h>
#define Maxs 100
using namespace std;
int mien=0,n,m;
int a[Maxs][Maxs];
bool flag[Maxs][Maxs] ;

void loang(int i, int j)
{
    flag[i][j]=true;
    if(i-1>=0 and a[i-1][j]==a[i][j] and (!flag[i-1][j]))
        loang(i-1,j);
    if(i+1<n and a[i+1][j]==a[i][j] and (!flag[i+1][j]))
        loang(i+1,j);
    if(j-1>=0 and a[i][j-1]==a[i][j] and (!flag[i][j-1]))
        loang(i,j-1);
    if(j+1<m and a[i][j+1]==a[i][j] and (!flag[i][j+1]))
        loang(i,j+1);

}
int main()
{

    cout<<"nhap kich thuoc n va m";
    cin>>n>>m;
    srand(time(NULL));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            flag[i][j] = false ;
            a[i][j]=rand()%2;
        }
    cout<<"*****************"<<endl;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<oa[i][j]<<" ";
            cout<<endl;
        }

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            {

                if (!flag[i][j])
                {
                    mien++;
                    loang(i,j);
                }
            }
    cout<<mien;
}
