#include<bits/stdc++.h>
using namespace std;
char s[1000],p[1000];
void fnc()
{
    long long i,sum=0,sl,pl,x,y,carry=0;
    sl = strlen(s); pl = strlen(p);
    reverse(s,s+sl);   reverse(p,p+pl);
    for(i=0; i<max(sl,pl); i++){
        x =0; y=0;
        if(i<sl) x = s[i]-'0';
        if(i<pl) y = p[i]-'0';
        sum = x+y+carry;
        p[i] = (sum%10)+'0';
        carry = sum/10;
    }
    if(carry) p[strlen(p)] = carry+'0';
    reverse(s,s+sl);
    reverse(p,p+strlen(p));

}
int main()
{
    while(cin >> s){
            if(strcmp(s,"0")==0) break;
            fnc();
    }
    printf("%s\n",p);
    return 0;
}
