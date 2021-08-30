#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    string s;
    while(cin >> n >> s){
        double p=strtod(s.c_str(),NULL);
        double a=pow(p,(1.00/n));
        a = round(a);
        long long m = (long long) a;
        printf("%lld\n",m);
    }
    return 0;
}
