#include<bits/stdc++.h>
using namespace std;
string s="121243617461765";
int z[15]={0};
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
int main()
{
    z[0]=-1;
    z_algo(s,z);
    for(int i=0;i<15;i++)
    {
        cout<<z[i]<<" ";
    }
}

