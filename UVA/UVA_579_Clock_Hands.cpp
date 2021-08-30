#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long h,m;
    while(scanf("%lld:%lld",&h,&m)){
        if(h==0 && m==0) break;
        if(h==12) h=0;
        double h1 = (h*30)+(m/2.00),m1=(6*m);
        double total = abs(h1-m1);
        if(total>180) total = 360.00-total;
        printf("%.3lf\n",total);
    }
    return 0;
}
