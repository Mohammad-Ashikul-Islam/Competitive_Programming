#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,i=1,j;
   char s[110];
   cin >> t;
   for(i=1; i<=t; i++){
    scanf(" %[^\n]",s);
    for(j=0; j<strlen(s); j++){
        if(s[j]>=97 && s[j]<=122){
            s[j] = toupper(s[j]);
        }
    }
    printf("Case %d: %s\n",i,s);
   }
    return 0;
}


