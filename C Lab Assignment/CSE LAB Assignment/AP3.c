#include<stdio.h>
int main()
{
    double F;
    printf("Please Enter Temperature In Fahrenheit: ");
    scanf("%lf",&F);
    printf("The Temperature In Celsius is: %0.2lf",(5.00/9)*(F-32));
    return 0;
}
