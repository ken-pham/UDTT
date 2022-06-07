#include<bits/stdc++.h>
using namespace std;
//cau truc du lieu
//+ so dinh n=9
int n=9;
//ma hoa dinh
//dinh xuat phat
int u=0;
//dinh ket thuc
int v=1;
//danh dau da di
bool go[9]={false};
//duong di ngan nhat
int p[9];
int c[9][9]={
{-1,-1,10,10, 9,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1, 8,12, 5},
{10,-1,-1, 6,-1,-1,-1,20,-1},
{10,-1, 6,-1, 7, 7, 8,-1,-1},
{ 9,-1,-1, 7,-1,-1,-1,-1, 6},
{-1,-1,-1, 7,-1,-1,10,15,-1},
{-1, 8,-1, 8,-1,10,-1,-1, 5},
{-1,12,20,-1,-1,15,-1,-1,-1},
{-1, 5,-1,-1, 6,-1, 5,-1,-1}
};
bool greedy_travel()
{
    p[m]=u;
    go[u]=true;
    while(u!=v)
    {
        int w=0;

    }
}
