#include<stdio.h>
int main()
{
    int n,i,sum=1,temp = 1,t_n=1;
    printf("Please Enter The Value Of 'n' In The Series: ");
    scanf("%d",&n);
    if(n==0)
        printf("Sum of the series = 0\nAverage of the series = 0");
    else if(n==1)
        printf("Sum of the series = 1\nAverage of the series = 1");
        else{
    for(i=2; i<=n; i++){
        t_n += 1;
        temp +=3;
        sum += temp;
        }
    printf("Sum of the series = %d\n",sum);
    printf("Average of the series = %.2lf\n",double(sum*1.0)/t_n);
    }
    return 0;
    }
