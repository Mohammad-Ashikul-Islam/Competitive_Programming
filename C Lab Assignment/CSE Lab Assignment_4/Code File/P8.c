#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long i,j,n,*ara,temp;
    printf("How Many Numbers? ");
    scanf("%lld",&n);
    printf("\n");
    ara = (long long *)malloc(sizeof(long long)*n);
    for(i=0; i<n; i++) scanf("%lld",&ara[i]);
    for(i=0; i<n;i++){
    for(j=0; j<n-i-1; j++){
    if(ara[j]>ara[j+1]){
        temp = ara[j]; ara[j]=ara[j+1]; ara[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++) printf("%lld ",ara[i]);
    printf("\n");
    return 0;
}
