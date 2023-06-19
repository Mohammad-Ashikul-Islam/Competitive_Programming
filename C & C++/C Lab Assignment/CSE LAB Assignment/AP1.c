#include<stdio.h>
int main()
{
    int A,B;
    printf("Please Enter Two Integer To Get Their Addition,Subtraction,Multiplication And Division: ");
    scanf("%d%d",&A,&B);
    printf("The Addition Of This Two Number Is: %d\n",A+B);
    printf("The Subtraction Of This Two Number Is: %d\n",A-B);
    printf("The Multiplication Of This Two Number Is: %d\n",A*B);
    printf("The Division Of This Two Number Is: %0.2lf\n",(A*1.0)/B);
    return 0;
}
