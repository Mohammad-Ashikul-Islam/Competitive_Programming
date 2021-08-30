#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[100];
    printf("Please enter the string:\n");
    scanf(" %[^\n]",s);
    for(i=0; s[i]!='\0'; i++){
        if((s[i]>='A' && s[i]<'Z') || (s[i]>='a' && s[i]<'z') || (s[i]>='0' && s[i]<'9'))
            s[i] = s[i]+1;
            else if(s[i]=='Z' || s[i]=='z')
            s[i] = s[i]-25;
            else if(s[i]=='9')
                s[i]='0';
            else
                s[i] = 'a';

    }
    printf("%s\n",s);
    return 0;
}
