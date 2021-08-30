#include<stdio.h>
#define pi 3.14159265
int main()
{
    int t,r,v,i=0;
    double d;
    scanf("%d",&t);
    while(t--){
            i=i+1;
        scanf("%d %d",&r,&v);
        d = (pi*r)/2;
        printf("Case %d: %.8lf\n",i,d/v);
    }
    return 0;
}
