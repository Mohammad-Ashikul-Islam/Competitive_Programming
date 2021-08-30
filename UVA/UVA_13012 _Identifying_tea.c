#include<stdio.h>
int main()
{
    int T;
    while(scanf("%d",&T)!=EOF){
    int i=5,n,count=0;
    while(i--){
        scanf("%d",&n);
        if(T==n) count = count+1;
    }
    printf("%d\n",count);
    }
    return 0;
}
