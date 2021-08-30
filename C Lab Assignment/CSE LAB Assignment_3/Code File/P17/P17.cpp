#include<stdio.h>
int main()
{
    int a,b,temp,gcd;
    printf("Please enter two number: ");
    scanf("%d %d",&a,&b);
        while(a!=0){
            temp = b%a;
            b = a;
            a = temp;
            }
        gcd = b;
        printf("GCD Is: %d\n",gcd);
       return 0;
}
