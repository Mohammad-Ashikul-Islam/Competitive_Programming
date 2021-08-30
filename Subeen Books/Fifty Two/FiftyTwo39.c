#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,len;
    char s[1001];
    char s2[1001];
    scanf("%d",&T);
    while(T--){
        scanf("%s",s);
        len = strlen(s);
        for(i=0,j=len-1; i<len; i++,j--){
            s2[i] = s[j];
        }
        s2[i]='\0';
        if(strcmp(s, s2)==0){
            printf("Yes! It is palindrome!\n");
        }
        else{
            printf("Sorry! It is not palindrome!\n");
        }
    }
    return 0;
}
