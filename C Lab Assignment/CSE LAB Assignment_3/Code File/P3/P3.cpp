#include<stdio.h>
int main()
{
    unsigned long long int n,sum=0;
    printf("Please enter the number: ");
    scanf("%llu",&n);
    printf("\nSum Of The Digits Of %llu Is: ",n);
    while(n!=0){
       sum += n%10;
       n = n/10;
        }
    printf("%llu\n",sum);
    return 0;
    }
