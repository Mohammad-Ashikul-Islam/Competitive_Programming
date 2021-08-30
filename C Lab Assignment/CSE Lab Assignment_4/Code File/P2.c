#include<stdio.h>
int main()
{
    long long n,i,j,ara[1000],temp;
    printf("How Many Numbers? #Ans: ");
    scanf("%lld",&n);
    for(i=0; i<n; i++)
        scanf("%lld",&ara[i]);
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(ara[j] > ara[j+1]){
   temp = ara[j];   ara[j] = ara[j+1]; ara[j+1] = temp;
            }
        }
    }
    printf("After Sorting(Smaller To Bigger): \n");
    for(i=0; i<n; i++) printf("%lld ",ara[i]);
    printf("\n");
    return 0;
}
