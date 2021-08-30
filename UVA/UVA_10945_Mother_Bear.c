#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    char p[100];
    char q[100];
    while(gets(s)){
        if(strcmp("DONE",s)==0)
        break;

    int i,j;
    for(i=0,j=0; i<strlen(s); i++){
        if((s[i]>='A' && s[i]<='Z')|| (s[i]>='a' && s[i]<='z')){
        p[j] = tolower(s[i]);
        j=j+1;
        }
    }
    p[j]= '\0';
    for(i=0,j=strlen(p)-1;i<strlen(p);i++,j--)
    q[i] = p[j];
    q[i] = '\0';
    if(strcmp(p,q)==0)
    printf("You won't be eaten!\n");
    else
    printf("Uh oh..\n");
        }
    return 0;
}
