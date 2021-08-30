#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        long long i,g=__gcd(a,b),c=0;
        for(i=1; i*i<=g; i++){
            if(g%i==0){
                c+=2;
            }
        }
        if((i-1)*(i-1)==g) c--;
        printf("%lld\n",c);
    }
    return 0;
}
