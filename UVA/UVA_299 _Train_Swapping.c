#include<stdio.h>
int main()
{
    long long t,k,i,j,n,temp;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        k=0;
        long long ara[n];
        for(i=0; i<n; i++)
            scanf("%lld",&ara[i]);
        for(i=0; i<n; i++){
            for(j=0; j<n-1-i; j++){
                if(ara[j]>ara[j+1]){
    temp = ara[j]; ara[j]=ara[j+1]; ara[j+1] = temp; k++;
                }
            }
        }
        printf("Optimal train swapping takes %lld swaps.\n",k);
    }
    return 0;
}
