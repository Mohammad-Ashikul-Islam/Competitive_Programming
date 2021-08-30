#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(scanf("%lld",&n)){
        if(n==0) break;
        double d=sqrt(n);
        if(d-(long long)d==0.0) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
