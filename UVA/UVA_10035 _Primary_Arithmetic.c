#include<stdio.h>
int main()
{
    long long unsigned m,n,c,a;
    while(scanf("%llu %llu",&n,&m)!=EOF){
          a=0;  c=0;
        if(m==0 && n==0) break;
    while(1){
        if(m==0 && n==0 && c==0) break;
            if(m%10+n%10+c >=10){
            m /=10; n /=10;     a=a+1; c =1;
            }
            else{
            m /=10; n /=10; c=0;  }
    }
    if(a==0)
    printf("No carry operation.\n");
    else if(a==1) printf("%llu carry operation.\n",a);
    else printf("%llu carry operations.\n",a);
    }
    return 0;
}
