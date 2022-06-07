#include<bits/stdc++.h>
using namespace std;
struct ts
{
    string name;
    int gt;
    string tt;
};
ts x[5]={
    {"ban",120000,"cu"},
    {"ghe",170000,"moi"},
    {"tivi",50000,"hong"},
    {"tulanh",1200000,"cu"},
    {"xemay",1500000,"cu"}
};
int dq(int n)
{
    if(n<0) return 0;
    if(x[n].tt=="hong")
        return dq(n-1);
    return x[n].gt+ dq(n-1);
}
void sort_by_gt()
{
 for(int i=0;i<4;i++)
    for(int j=i+1;j<=4;j++)
        if(x[j].gt<x[i].gt)
        {
            ts v=x[i];
            x[i]=x[j];
            x[j]=v;
        }
}
float p=314120;
int b[5];
int tinh()
{
    sort_by_gt();
    int ans=0;
    int i=0;
    float k=p;
    while(k>0 )
    {
        if(i==5)
            {
                ans=-1;
                break;
            }
        k-=x[i].gt;
        b[ans]=i;
        ans++;
        i++;

    }
    return ans;

}

void sort_by_tt()
{
  for(int i=0;i<=4;i++)
        if(x[i].tt=="cu")
            x[i].tt="1";
        else
            if(x[i].tt=="moi")
                x[i].tt="2";
            else
                x[i].tt="3";
  for(int i=0;i<4;i++)
    for(int j=i+1;j<5;j++)
        if(x[j].tt<x[i].tt)
            {
            ts v=x[i];
            x[i]=x[j];
            x[j]=v;
            }
  for(int i=0;i<=4;i++)
    if(x[i].tt=="1")
            x[i].tt="cu";
    else
        if(x[i].tt=="2")
            x[i].tt="moi";
        else
            x[i].tt="hong";

}
int main()
{
    cout<<"tong gia tri uoc tinh cua cac tai san khong bi hong la "<<dq(4)<<endl;
    if(tinh() == -1)
        cout<<"ban tat ca tai san cung khong du tien hoc"<<endl;
    else
        {
        cout<<"can ban nhieu nhat "<<tinh()<<" tai san de du so tien hoc "<< p <<endl;
        cout<<"cacs tai san do la" <<endl;
        for(int i=0;i<tinh();i++)
            cout<<x[b[i]].name<<endl;
        }
    sort_by_tt();
    cout<<"danh sach sau khi sap xep theo tinh trang la "<<endl;
    for(int i=0;i<=4;i++)
    {
        cout<<setw(20)<<x[i].name<<setw(15)<<x[i].gt<<setw(10)<<x[i].tt<<endl;
    }

}
