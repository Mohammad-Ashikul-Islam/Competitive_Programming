#include<stdio.h>
int main()
{
    int i,k,T;
    char S[100];
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf(" %[^\n]",S);
        for(k=0; S[k]!='\0'; k++){
     if(S[k] >= 'A' && S[k] <= 'Z'){
        printf("%d", (S[k]-'A')+1);
                }
            }
        printf("\n");
        }
    return 0;
    }
