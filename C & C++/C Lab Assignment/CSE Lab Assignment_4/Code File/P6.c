#include<stdio.h>
int main()
{
    char s[1000];
    long long i;
    printf("Enter the sentence: \n");
    scanf(" %[^\n]",s);
    for(i=1; s[i]!='\0'; i++)
        printf("%c",s[i]);
    printf("%ca",s[0]);
    return 0;
}
