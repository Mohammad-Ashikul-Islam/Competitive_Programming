#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    printf("Please Enter The Length Of The Other Two Sides Of The Right Triangle: ");
    scanf("%lf %lf",&a,&b);
    printf("The Length Of The Hypotenuse Of The Right Triangle Is: %0.2lf", sqrt(a*a+b*b));
    return 0;
}
