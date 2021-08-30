#include<bits/stdc++.h>
using namespace std;
long long fnc(long long n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    long long i=1,c=0;
    for(; i<=sqrt(n); i++){
        if(n%i==0){
            c++;
            if(i!=(n/i)) c++;
        }
    }
    return c;
}
int main()
{
    long long l,u,t;
    cin >> t;
    while(t--){
        cin >> l >> u;
        long long x,y,in=0,temp,count=0;
        x = min(u,l); y=max(u,l);
        for(; x<=y; x++){
            temp = fnc(x);
            if(temp >count){in=x; count=temp; }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,in,count);
    }
    return 0;
}
