#include<stdio.h>
int main()
{
    int i,n,x;
    printf("Please enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(x=1; x<=i; x++)
            printf("%d",i);
        printf("\n");
        }
        return 0;
    }
