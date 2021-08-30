#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    long long k=0,i;
    while(gets(s)){
    for(i=0;i<strlen(s); i++){
        if(s[i]=='"' && k==0){
            k= 1;
            printf("``");
        }
        else if(s[i]=='"' && k==1){
            k= 0;
            printf("''");
        }
        else printf("%c",s[i]);
    }
    printf("\n");
    }
    return 0;
}
