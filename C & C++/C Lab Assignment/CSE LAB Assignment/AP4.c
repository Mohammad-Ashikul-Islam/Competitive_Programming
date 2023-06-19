#include<stdio.h>
#define pi 3.1416
int main()
{
    double r;
    printf("Please Enter The Radius Of The Circle: ");
    scanf("%lf",&r);
    printf("The Area Of The Circle Is: %0.2lf\n", pi*r*r);
    printf("The Circumference Of The Circle Is: %0.2lf\n", 2*pi*r);
    return 0;
}
