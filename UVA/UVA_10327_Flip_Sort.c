#include<stdio.h>
int main()
{
    long long n,i,j,k,temp,count,ara[1001];
    while(scanf("%lld",&n) != EOF){
            count = 0;
        for(i=0; i<n; i++)
            scanf("%lld",&ara[i]);
        for(k=0; k<n; k++){
            for(j=0; j<n-k-1; j++){
                if(ara[j]>ara[j+1]){
                    count = count+1;
                    temp = ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1] = temp;
                }
            }
        }
        printf("Minimum exchange operations : %lld\n",count);
    }
    return 0;
}
