#include <bits/stdc++.h>

using namespace std;

string str[6]={"tam","toan", "trang", "cong", "trung", "tu"};

void next_config(int x[], int n, int i)
{
    x[i]+=1;
    i++;
    while(i<=n)
    {
        x[i] = x[i-1]+1;
        i++;
    }
}

void view_config(int x[], int k)
{
    for(int i=1; i<=k; i++)
    {
        cout << str[x[i]] << " ";
    }
    cout << endl;
}

void list_config(int k, int n)
{
    int i;
    int x[k+1];
    for(int i=1; i<=k; i++)
    {
        x[i]=i;
    }
    do
    {
        view_config(x,k);
        i=k;
        while(i>0 && x[i]==n-k+i)
        {
            i--;
        }
        if(i>0)
        {
            next_config(x,k,i);
        }
    }while(i>0);
}
int main()
{
    int n, k;
    list_config(3,6);

}
