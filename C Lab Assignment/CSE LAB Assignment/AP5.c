#include<stdio.h>
int main()
{
    double X,Y,Z;
    printf("Please Enter Three Number Of The Student: ");
    scanf("%lf %lf %lf",&X,&Y,&Z);
    printf("The Total Marks of The Student Is: %0.2lf\n", X+Y+Z);
    printf("The Average Marks Of The Student: %.2lf\n", (X+Y+Z)/3);
    return 0;
}
