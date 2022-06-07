#include<bits/stdc++.h>
using namespace std;
const char *T="mothaibabonnamsaubay",*P="bonnam";
int char_in_string(char s,const char *p)
{
    for(int i=0;i<strlen(p);i++)
        if(s==p[i]) return i;
    return -1;
}
int Boyer_Moore_Horspool()
{
    int dem=0, i = strlen(P)-1, v = strlen(P);
    while (i < strlen(T)) {
    int x = v -1,j = i;
    while (T[j] == P[x] && x > -1){
        j--; x--;
    }
    if (x < 0) { dem++; i = i + v; }
    else {
           int k = char_in_string(T[j], P);
            if (k < 0)
               i = i + v;
            else i=i+v-x;
         }
}
return dem;
}
int main()
{

    if (Boyer_Moore_Horspool())
        cout<<"yes";
        else cout<<"no";
}
