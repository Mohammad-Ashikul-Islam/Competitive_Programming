#include<stdio.h>
int main()
{
    double a,sum=0,i;
    int n;
    printf("How many numbers? ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%lf",&a);
        sum += a;
        }
    printf("\nSum = %.2lf\nAverage = %.2lf\n",sum,sum/n);
    return 0;
    }
