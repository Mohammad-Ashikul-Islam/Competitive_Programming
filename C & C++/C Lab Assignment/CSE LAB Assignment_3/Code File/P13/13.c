#include<stdio.h>
int main()
{
    int a,n,f=0,f1=0,f2=1;
    printf("Please enter the number: ");
    scanf("%d",&n);
    a = n;
    if(a==1 || a==2)
        printf("Fibonacci %d Is: 1",n);
    else{
    for(; a>=2; a--){
            f = f1+f2;
            f1 = f2;
            f2 = f;
    }
    printf("Fibonacci %d Is: %d",n,f);
    }
    return 0;
}
