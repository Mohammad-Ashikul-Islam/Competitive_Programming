#include<stdio.h>
int main()
{
    double cm;
    printf("Please Enter The Length In Centimeter: ");
    scanf("%lf",&cm);
    printf("The Length In Inch Is: %0.2lf",cm/2.54);
    return 0;
}
