#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001];
    int T,i,j;
    scanf("%d",&T);
    for(i=0; i<T; i++){
        scanf(" %[^\n]",S);
        for(j=strlen(S)-1; j>=0; j--)
        {
            printf("%c",S[j]);
            }
            printf("\n");
        }
    return 0;
    }
