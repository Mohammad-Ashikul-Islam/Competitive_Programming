#include<stdio.h>
#include<string.h>
char ara[1000];
int i,j;
void recurse(int j)
{
    printf("%c",ara[j]);
    if(j<0){
        return;
        }
     recurse(j-1);
}

int main()
{
    printf("Please enter the string: ");
    scanf(" %[^\n]",ara);
    j=strlen(ara)-1;
    recurse(j);
    return 0;
}
