#include<bits/stdc++.h>
using namespace std;
long long fnc(long long b,long long p,long long m)
{
    if(p==0) return 1;
    if(p%2==1) return ((b%m)*fnc(b,p-1,m)%m)%m;
    else{
        long long temp = fnc(b,p/2,m);
        return ((temp%m)*(temp%m))%m;
    }
}
int main()
{
    long long b,p,m;
    while(cin >> b >> p >> m){
        long long res = fnc(b,p,m);
        cout << res << endl;
    }
    return 0;
}
