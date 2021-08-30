#include<stdio.h>
int main()
{
    long long t,x,y;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&x,&y);
        if((x<y) || (((x+y)%2!=0)  && ((x-y)%2!=0)))
            printf("impossible\n");
            else
                printf("%lld %lld\n",(x+y)/2, (x-y)/2);
    }
    return 0;
}
