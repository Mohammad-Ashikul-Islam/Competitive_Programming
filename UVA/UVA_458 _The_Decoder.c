#include<stdio.h>
int main()
{
    char s[10000];
    int i;
    while(gets(s)){
        for(i=0; s[i]!='\0'; i++){
            if(s[i] != '\n')
                printf("%c",s[i]-7);
        }
        printf("\n");
    }
    return 0;
}
