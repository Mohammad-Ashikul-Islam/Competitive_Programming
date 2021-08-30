#include<stdio.h>
#include<string.h>
int main()
{
    int N,sum,i,d;
    char s[100];
    char q[] = "donate";
    char r[] = "report";
        sum = 0;
        scanf("%d",&N);
        while(N!=0){
            scanf("%s",s);
            if(strcmp(s,q)==0){
            scanf("%d",&d);
            sum = sum+d;
                N = N-1;
                }
            if(strcmp(s,r)==0){
                N = N-1;
                printf("%d\n",sum);
                }
                }
    return 0;
}
