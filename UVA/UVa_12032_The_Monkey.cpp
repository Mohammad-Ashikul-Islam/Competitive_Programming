#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    scanf("%lld",&t);
    for(long long u=1; u<=t; u++){
        long long n,dmax,x,temp;
        scanf("%lld",&n);
        vector<long long> v;
        v.push_back(0);
        for(long long i=1; i<=n; i++){
                scanf("%lld",&x); v.push_back(x);
                if(i==1){dmax=x;continue;}
                if(dmax<v[i]-v[i-1]) dmax=v[i]-v[i-1];
        }
        if(n==1) {printf("Case %lld: %lld\n",u,v[1]);continue;}
        temp=dmax;
        for(long long i=1; i<=n; i++){
            if(v[i]-v[i-1]<dmax) continue;
            else if(dmax==v[i]-v[i-1]) dmax--;
            else{
             temp++; break;
            }
        }
        printf("Case %lld: %lld\n",u,temp);

    }
    return 0;
}
