#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,count;
    char s[1001];
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf(" %[^\n]",s);
        count = 0;
        for(j=0; j<strlen(s); j++){
            if(s[j] == 'a' || s[j]== 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                count++;
                }
            }
        printf("Number of vowels = %d\n",count);
        }
    return 0;
    }
