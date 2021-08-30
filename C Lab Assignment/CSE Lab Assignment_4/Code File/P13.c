#include<stdio.h>
int main()
{
    long long i;
    char s[1000],p[1000];
    printf("Enter the string: ");
    scanf(" %[^\n]",s);
    for(i=0; s[i]!= '\0'; i++)
        p[i] = s[i];
    p[i] = '\0';
    printf("First string is: %s\n",s);
    printf("Copied string is: %s\n",p);
    return 0;
}
