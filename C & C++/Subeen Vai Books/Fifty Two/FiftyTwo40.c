#include<stdio.h>
int main()
{
    int X,K,T,i,sum,power;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&X,&K);
        int sum = 1, power = 1;
        for(i = 1; i<=K; i++){
            power = power*X;
            sum += power;
        }
        printf("Result = %d\n",sum);
    }
    return 0;
}
