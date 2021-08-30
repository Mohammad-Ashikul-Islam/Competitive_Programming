#include<stdio.h>
int main()
{
    int x,n,sum;
    while(scanf("%d",&n) != EOF){

        sum = n;
        while(n>2){
            x = n/3;
        sum += x;
            n = n%3+x;
        }
        if(n==2) sum = sum+1;
        printf("%d\n",sum);
    }
    return 0;
}
