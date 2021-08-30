#include<stdio.h>
int main()
{
    int a,b,temp,gcd;
    printf("Please enter two number: ");
    scanf("%d %d",&a,&b);
    int x = a*b;
        while(a!=0){
            temp = b%a;
            b = a;
            a = temp;
            }
        gcd = b;
        printf("LCD Is: %d\n",x/gcd);
       return 0;
}
