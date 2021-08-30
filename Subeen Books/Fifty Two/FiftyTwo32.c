#include<stdio.h>
int main()
{
    int T,X,N,j;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&X);
        scanf("%d",&N);
        if(X>N){
            printf("Invalid!\n");
        }
        else{
            for(j=X; j<=N; j += X){
                printf("%d\n",j);
            }
        }
    }
    return 0;
}
