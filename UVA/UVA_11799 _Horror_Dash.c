#include<stdio.h>
int main()
{
    int t,i=1,n,m,max;
    scanf("%d",&t);
    while(t--){
            max=0;
        scanf("%d",&m);
        while(m--){
            scanf("%d",&n);
            if(n>max) max=n;
        }
    printf("Case %d: %d\n",i++,max);
    }
    return 0;
}
