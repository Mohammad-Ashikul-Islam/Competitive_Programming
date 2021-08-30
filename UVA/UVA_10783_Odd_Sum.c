#include<stdio.h>
int main()
{
    int T,i,a,b,sum;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
            sum = 0;
        scanf("%d",&a);
        scanf("%d",&b);
    for(; a<=b; a++){
        if(a%2!=0)
            sum += a;
    }
    printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
