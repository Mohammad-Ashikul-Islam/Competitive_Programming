#include<stdio.h>
int main()
{
    char s[1000],p[1000];
    printf("Enter the first string: ");
    scanf(" %[^\n]",s);
    printf("\nEnter the second string: ");
    scanf(" %[^\n]",p);
    printf("\nFirst string: %s\n",s);
    long long i=0,j=0;
    while(s[i] != '\0') i++;
    while(p[j] != '\0'){
        s[i] = p[j]; i++; j++;
    }
    s[i] = '\0';
    printf("Second string: %s\n",p);
    printf("After concatenation the String is:\n\t%s\n",s);
    return 0;
}
