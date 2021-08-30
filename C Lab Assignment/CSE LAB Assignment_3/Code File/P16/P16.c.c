#include<stdio.h>
#include<math.h>
int main()
{
    long long unsigned int i,n;
    int a=0;
    printf("Please enter the number: ");
    scanf("%llu",&n);
    if(n==2)
        a = 0;
    else if(n%2==0 || n==1)
        a = a+1;
    else{
    for(i=3;i<=sqrt(n); i=i+2){
    if(n%i==0)
        a = a+1;
        break;
    }
    }
    if(a==0)
        printf("%llu is a prime number !\n",n);
    else
        printf("%llu is not a prime number !\n",n);
    return 0;
}
