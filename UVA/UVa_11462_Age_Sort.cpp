#include<bits/stdc++.h>
using namespace std;
long long ara[3000000];
int main()
{
    long long n;
    while(scanf("%lld",&n)){
            if(n==0) break;
        for(long long int i=0; i<n; i++) scanf("%lld",&ara[i]);
        sort(ara,ara+n);
        for(long long i=0; i<n-1; i++) printf("%lld ",ara[i]);
        printf("%lld\n",ara[n-1]);
    }
    return 0;
}
