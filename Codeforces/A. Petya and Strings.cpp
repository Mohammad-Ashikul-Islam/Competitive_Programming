#include<bits/stdc++.h>
using namespace std;
int main()
{
   char s[1000],p[1000];
   scanf(" %[^\n]",s);
   scanf(" %[^\n]",p);
   strlwr(s);
   strlwr(p);
   cout << strcmp(s,p) << endl;
    return 0;
}
