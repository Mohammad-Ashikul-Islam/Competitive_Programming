#include<stdio.h>
int main()
{
    int A,B,C,i;
    int T;
    scanf("%d",&T);
    while(T--){
        scanf("%ld",&A);
        scanf("%ld",&B);
        scanf("%ld",&C);
        for(i=1; i<=C; i++){
            if((i%A == 0) && (i%B==0)){
                printf("%ld\n",i);
            }
        }
    }
    return 0;
}
