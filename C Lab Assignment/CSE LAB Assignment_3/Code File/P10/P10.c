#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[1000];
    char p[1000];
    char q[1000];
    int i;
    printf("Please enter the string: \n");
    scanf(" %[^\n]",s);
    for(i=0; s[i] != '\0'; i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i] = tolower(s[i]);
    }
    strcpy(p,s);
    p[strlen(p)] = '\0';
    strcpy(q,strrev(p));
    q[strlen(q)] = '\0';
    if(strcmp(s,q)==0)
        printf("Given string is a palindrome !\n");
    else
        printf("Given string is not a palindrome !\n");
    return 0;
}
