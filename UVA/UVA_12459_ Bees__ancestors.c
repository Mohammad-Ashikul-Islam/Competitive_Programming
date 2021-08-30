#include<stdio.h>

int main()
{
    long long n,i,f,f1,f2;
    while(1){
            scanf("%lld",&n);
        if(n==0) break;
        f1=1; f2=2;
        if(n==1) printf("1\n");
        else if(n==2) printf("2\n");
        else{
        for(i=3; i<=n; i++){
            f=f1+f2;
            f1 = f2; f2 = f; }
           printf("%lld\n",f);
        }
    }
    return 0;
}
