#include<stdio.h>
int main()
{
    int T,i,N;
    int ara[] = {6, 28, 496, 8128, 33550336};
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        for(i=0; i<5; i++){
            if(ara[i] <= N){
                printf("%d\n",ara[i]);
            }
            else{
                break;
            }
        }
    }
    return 0;
}
