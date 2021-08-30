#include<stdio.h>
int main()
{
    int T,num,rev,N;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        rev = 0;
        num = N;
        while(num != 0){
            rev = rev*10;
            rev = rev + num%10;
            num = num/10;
        }
        printf("%d\n",rev);
    }
    return 0;
}

