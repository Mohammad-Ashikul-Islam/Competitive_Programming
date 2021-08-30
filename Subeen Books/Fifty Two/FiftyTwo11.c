#include <stdio.h>
int main()
{
    int T,N,i;
    scanf("%d",&T);
    for(i = 1; i<=T; i++){
    scanf("%d",&N);
    long long int factorial = 1,i;
    for(i=2; i<=N; i++){
    factorial = factorial*i;
    }
    printf("%lld\n",factorial);
    }
    return 0;
}
