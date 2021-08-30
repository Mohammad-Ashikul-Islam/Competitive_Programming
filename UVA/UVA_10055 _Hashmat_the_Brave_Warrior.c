#include<stdio.h>
int main()
{
    long long int m,n,a;
    while(scanf("%lld%lld",&m,&n)!= EOF){
            if(m>n) a=m-n;
            else a = n-m;
        printf("%lld\n",a);
    }
    return 0;
}
