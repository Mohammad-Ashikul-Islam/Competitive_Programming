#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n!=0 && (n&(n-1))==0)
        printf("Yes ! The Number Is A Power Of 2 !\n");
    else
        printf("Sorry ! The Number Is Not A Power Of 2 !\n");
    return 0;
}
