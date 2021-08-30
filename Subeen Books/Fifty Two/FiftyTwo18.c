#include<stdio.h>
int main()
{
    char S[10001];
    int j,i,T;
    scanf("%d",&T);
    for(j=0; j<T; j++)
    {
        scanf(" %[^\n]",S);
        for(i=0; S[i]!= '\0'; i++)
        {
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
            printf("%c", S[i]);
        }
        printf("\n");
        for(i=0; S[i] != '\0'; i++){
        if(S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u' && S[i] != ' ')
            printf("%c", S[i]);
        }
        printf("\n");
    }
    return 0;
}
