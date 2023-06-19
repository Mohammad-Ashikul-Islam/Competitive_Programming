#include<bits/stdc++.h>
using namespace std;
char temp[10000];
void sum(char s[],char p[])
{
    long long sum=0,i,carry=0,x,y,sl,pl,count=0;
    sl=strlen(s);    pl=strlen(p);
    reverse(s,s+sl); reverse(p,p+pl);
    for(i=0; i<max(sl,pl); i++){
            count++;
        x=0;y=0;
        if(i<sl) x = s[i]-48;
        if(i<pl) y = p[i]-48;
        sum = x+y+carry;
        temp[i] = (sum%10)+'0';
        carry=sum/10;
    }
    if(carry) temp[i] = carry+'0';
    temp[i+1]='\0';
    reverse(temp,temp+strlen(temp));
}
int main()
{
    char s[500],p[500];
    cin >> s >>p;
    sum(s,p);
    for(int i=0; i<strlen(temp); i++) cout << temp[i];
    cout  << endl;
    return 0;
}
