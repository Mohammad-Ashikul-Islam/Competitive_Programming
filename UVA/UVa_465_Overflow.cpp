#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x = 2147483647;
    char s[5000],ch;
    double a,b,sum;
    while(scanf(" %[^\n]",s)!=EOF){
            a=0; b=0;
            printf("%s\n",s);
            sscanf(s,"%lf %c %lf",&a,&ch,&b);
        if(ch=='+') sum = a+b;
        else sum = a*b;
        if(a > x ){
            cout << "first number too big\n";
        }
        if(b > x){
            cout << "second number too big\n";
        }
        if(sum > x)  cout << "result too big\n";
    }
    return 0;
}
