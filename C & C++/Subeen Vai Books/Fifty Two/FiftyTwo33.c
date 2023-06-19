#include<stdio.h>
int main()
{
    int A,B,C,T,i;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&C);
        for(i=A; i<=B; i++){
            if(i%C == 0){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
