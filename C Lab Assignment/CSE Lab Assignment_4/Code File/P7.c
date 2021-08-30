#include<stdio.h>
#include<string.h>
long long i,l;
int stc(char s[],char p[])
{
    for(i=0; i<l; i++){
        if(s[i]>p[i]) return 1;
        else if(s[i]<p[i]) return -1;
    }
    return 0;
}
int main()
{
    char s[1000],p[1000];
    long long r;
    printf("Enter the first string: \n");
    scanf(" %[^\n]",s);
    printf("Enter the second string: \n");
    scanf(" %[^\n]",p);
    if(strlen(s)>strlen(p)) l = strlen(s);
    else l = strlen(p);
    r = stc(s,p);
        if(r==-1) printf("Second string is greater than the first,strcmp(s,p)=-1\n");
    else if(r==1) printf("First string is greater than the second,strcmp(s,p)=1\n");
    else printf("Strings are Equal/Same.strcmp(s,p)=0\n");
    return 0;
}
