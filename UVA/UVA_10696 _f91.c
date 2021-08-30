#include<stdio.h>
int main()
{
    long long unsigned t=250000,n;
    while(t--){
        scanf("%llu",&n);
        if(n==0) break;
        if(n<=100)
            printf("f91(%llu) = 91\n",n);
        else
            printf("f91(%llu) = %llu\n",n,n-10);
    }
    return 0;
}
