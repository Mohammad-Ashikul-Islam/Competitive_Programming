#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i=1;
    double u,v,t,a,s;
    while(cin >> n){
        if(n==0) break;
        else if(n==1){
            cin >> u >> v >> t;
            s = (u+v) * t / 2;
            a = (v-u) / t;
           printf("Case %lld: %.3lf %.3lf\n",i++,s,a);
        }
        else if(n==2){
            cin >> u >> v >> a;
            t = (v-u) / a;
            s = (u+v) * t / 2;
            printf("Case %lld: %.3lf %.3lf\n",i++,s,t);
        }
        else if(n==3){
            cin >> u >> a >> s;
            t = (-u + sqrt(u*u + 2*a*s)) / a;
            v = a*t + u;
            printf("Case %lld: %.3lf %.3lf\n",i++,v,t);
        }
        else if(n==4){
            cin >> v >> a >> s;
            t = (-v + sqrt(v*v + -2*a*s)) / -a;
            u = v - a*t;
            printf("Case %lld: %.3lf %.3lf\n",i++,u,t);
        }
    }
    return 0;
}
