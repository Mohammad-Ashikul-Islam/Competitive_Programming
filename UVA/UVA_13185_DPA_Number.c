#include<stdio.h>
int main()
{
int t,n,i,sum;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    sum =0;
    for(i=1;i<n;i++){
        if(n%i==0)
            sum += i;
    }
    if(sum>n)
        printf("abundant\n");
    else if(sum == n)
        printf("perfect\n");
    else
        printf("deficient\n");
}
return 0;
}
