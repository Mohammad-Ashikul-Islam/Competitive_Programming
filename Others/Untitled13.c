#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,count;
    char S[1001];
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf(" %[^\n]",S);
        count = 0;
        for(j=0; j<strlen(S); j++){
            if(S[j] == 'a' || S[j]== 'e' || S[j] == 'i' || S[j] == 'o' || S[j] == 'u' || S[j] == 'A' || S[j]== 'E' || S[j] == 'I' || S[j] == 'O' || S[j] == 'U'){
                count++;
                }
            }
        printf("Number of vowels = %d\n",count);
        }
    return 0;
    }
