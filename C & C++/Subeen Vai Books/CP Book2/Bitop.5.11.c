#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n^m)
        printf("Numbers are not equal\n");
    else
        printf("Number are equal\n");
    return 0;
}
