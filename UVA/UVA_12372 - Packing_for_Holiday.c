#include<stdio.h>
int main()
{
    int  t,i,n,k,x;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
            scanf("%d %d %d",&n,&k,&x);
            if(n<=20 && k<=20 && x<=20)
                        printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }
    return 0;
}
