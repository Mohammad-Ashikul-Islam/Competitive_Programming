#include<stdio.h>
int main()
{
    int T,i,k,count;
    char S[10001];
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf(" %[^\n]",S);
        count = 0;
        for(k=0; S[k]!='\0'; k++){
            if(S[k] == ' '){
                count++;
                }
            }
        printf("Count = %d\n", count+1);
        }
    return 0;
}
