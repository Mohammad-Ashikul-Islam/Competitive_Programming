#include<stdio.h>
int main()
{
    int n,m,x;
    while(1)
    {
        printf("Please Enter Your Number(0 To Exit): ");
        scanf("%d",&n);
        if(n==0) break;
        printf("How Many Bits You Want To Shift Left? ");
        scanf("%d",&x);
        m = n << x;
        printf("Result Is %d\n\n",m);
    }
    return 0;
}
