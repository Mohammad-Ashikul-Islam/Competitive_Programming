#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,S,a;
    printf("Please Enter The Values A,B,C Of The Triangle: ");
    scanf("%lf %lf %lf",&A,&B,&C);
    S = (A+B+C)/3;
    a=sqrt((S*(S-A)*(S-B)*(S-C)));
    printf("The Area Of The Triangle Is: %0.2lf",a);
    return 0;
}
