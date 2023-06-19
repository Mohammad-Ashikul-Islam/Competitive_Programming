#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],p[1000];
    printf("Enter the string: ");
    scanf(" %[^\n]",s);
    long long i = strlen(s)-1,j=0;
    for(; i>=0; i--,j++) p[j] = s[i];
    p[j] = '\0';
    printf("First string is: %s\n",s);
    printf("Reversed string is: %s\n",p);
    return 0;
}
