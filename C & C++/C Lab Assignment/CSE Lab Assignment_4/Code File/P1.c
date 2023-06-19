#include<stdio.h>
int main()
{
    long long ara[1000],i=0,n;
    printf("Please Enter The Number: ");
    scanf("%lld",&n);
    printf("Binary Code Of %lld Is: ",n);
    while(n!=0){
        ara[i] = n%2;
        n /= 2;
        i++;
    }
    for(i=i-1; i>=0; i--)
        printf("%lld",ara[i]);
        printf("\n");
    return 0;
}
