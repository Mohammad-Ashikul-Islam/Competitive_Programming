#include<stdio.h>
#include<math.h>
int main()
{
   long long int N,K,T,i,sum;
    scanf("%lld",&T);
    while(T--){
            sum = 0;
        scanf("%lld %lld",&N,&K);
        for(i=1;i<=sqrt(N);i++){
            if(N%i==0){
                if(i%K!=0)
                    sum = sum + i;
            if((N/i)%K != 0 && i!=(N/i))
                sum += (N/i);
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}

