#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a,b,c,s,p,f;
    int t=1000;
    while(t--){
        scanf("%lf%lf%lf",&a,&b,&c);
        if(a<=0 || b<=0 || c<=0)
            printf("-1.000\n");
        else{
            s = (a+b+c)/2;
            p = (s*(s-a)*(s-b)*(s-c));
            if(p<0) printf("-1.000\n");
            else{
                p = sqrt(p);
                f = p*(4.00/3);
                if(f<=0) printf("-1.000\n");
                else printf("%.3lf\n",f);
        }
    }
    }
    return 0;
}
