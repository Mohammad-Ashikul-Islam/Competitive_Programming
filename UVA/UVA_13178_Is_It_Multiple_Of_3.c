#include<stdio.h>
#include<string.h>
int  main()
{
    long long unsigned t,sum,i,j,n;
    scanf("%llu",&t);
    int ara[1000];
    while(t--){
        scanf("%llu",&n);
        j=0;
        for(i=1;i<=n; i++){
            ara[j] = i; j++;
        }
        sum = 0;
        for(i=0;i<j; i++)
            sum += ara[i];
        if(sum%3==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
