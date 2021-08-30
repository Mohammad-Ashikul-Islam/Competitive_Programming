#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    unsigned long long int N,sum,i;
    scanf("%d",&T);
    while(T--){
        scanf("%llu",&N);
        unsigned long long int sum = 1;
        unsigned long long int i=2;
        for(; i<=sqrt(N); i++){
            if(N%i==0){
                sum = sum+i+(N/i);
            }
        }
        if(sum != N){
            printf("NO, %llu is not a perfect number!\n",N);
        }
        else{
            printf("YES, %llu is a perfect number!\n",N);

        }
    }
    return 0;
}
