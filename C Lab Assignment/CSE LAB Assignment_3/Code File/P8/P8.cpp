#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[40];
    int i;
    printf("Please enter the string: ");
    scanf(" %[^\n]",s);
    for(i=0; s[i]!='\0'; i++){
        if (s[i]>='A' && s[i]<='Z')
           s[i] = tolower(s[i]);
        else if (s[i]>='a' && s[i]<='z')
           s[i] = toupper(s[i]);
        }
    printf("%s\n",s);
    return 0;
}
