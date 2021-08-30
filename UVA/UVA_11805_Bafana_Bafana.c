#include<stdio.h>
int main()
{
    int t,s,i=1,n,k,p,sum,x,temp;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&n,&k,&p);
        s = k+p;
        sum = k;
        x = k;
        while(sum!=s){
            x = x+1;
            if(x>n) x = 1;
            sum +=1;
        }
        printf("Case %d: %d\n",i++,x);
    }
    return 0;
}
