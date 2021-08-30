#include<stdio.h>
int main()
{
    int t=10,x,n,c;
    while(t--){
            c =0;
        scanf("%d",&n);
        if(n==0) break;
        while(n>2){
            x = n/3;
            c = c+x;
            n = n%3+x;
        }
        if(n==2) c = c+1;
        printf("%d\n",c);
    }
    return 0;
}
