#include<stdio.h>
int main()
{
    int t,i=1; double f,c,nf,nc;
    scanf("%d",&t);
    while(t--){
        scanf("%lf %lf",&c,&f);
        nf = f+(((9.00/5)*c)+32);
        nc = 5*((nf-32)/9.00);
        printf("Case %d: %.2lf\n",i++,nc);
    }
    return 0;
}
