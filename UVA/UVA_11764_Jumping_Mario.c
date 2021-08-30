#include<stdio.h>
int main()
{
    int h,l,t,i,ara[100],j,n;
    scanf("%d",&t);
    for(i=1;i<=t; i++){
            l=0; h=0;
        scanf("%d",&n);
        for(j=0;j<n; j++)
            scanf("%d",&ara[j]);
        for(j=0; j<n-1; j++){
            if(ara[j]>ara[j+1]) l++;
            else if(ara[j]<ara[j+1]) h++;
        }
    printf("Case %d: %d %d\n",i,h,l);
    }
    return 0;
}
