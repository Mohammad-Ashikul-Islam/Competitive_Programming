#include<stdio.h>
int main()
{
    long long unsigned i,j,t,m,w,temp,count,sum;
    long long ara[1000];
    scanf("%llu",&t);
    while(t--){
       scanf("%llu %llu",&m,&w);
        for(i=0;i<m;i++){
            scanf("%lld",&ara[i]);
        }
        for(i=0; i<m; i++){
            for(j=i; j<m-i-1; j++){
                if(ara[j]>ara[j+1]){
                    temp = ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;
                }
            }
        }
        sum = ara[0];
        i = 1;
        count = 0;
        while(i<=m){
                if(sum<=w){
            sum = sum+ara[i];
            count++;
                }
                i++;
        }
        printf("%llu\n",count);
    }
    return 0;
}
