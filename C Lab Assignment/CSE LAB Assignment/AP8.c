#include<stdio.h>
int main()
{
    double x,y;
    printf("Please Enter The Value Of x: ");
    scanf("%lf",&x);
    y = (x-1)/x;
    printf("Solution: %0.2lf",(y+(y*y)/2)+(y*y*y/3)+(y*y*y*y/4));
    return 0;
}
