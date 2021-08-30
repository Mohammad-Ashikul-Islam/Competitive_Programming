#include<stdio.h>
long long int fact(long long int n)
{
    long long int i, product = 1;
    for(i=1; i<=n; i++){
        product *= i;
    }
    return product;
}
int main()
{
   int T,i,j;
   double sum;
   long long int n;
   scanf("%d",&T);
   while(T--){
    scanf("%lld",&n);
    long long int j = 1;
    for(; j <=n; j++){
        sum = 0.0;
        for(i=1; i<=n; i++){
            sum += ( (double)i / fact(i) );
        }
    }
    printf("%.4lf\n",sum);
   }
    return 0;
}
