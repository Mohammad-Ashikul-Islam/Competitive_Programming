#include<bits/stdc++.h>
using namespace std;
long long paw(long long i){
    return i*i*i;
}
int main()
{
    long long t=2;
    while(t<=200){
        long long a=2,w,x,y,z;
        w=paw(t);
        while(a<=200){
            x=paw(a);
            long long b = a;
            while(b<=200){
                y=paw(b);
                long long c=b;
                while(c<=200){
                    z=paw(c);
                    if(w==(x+y+z))
                    printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n",t,a,b,c);
                    if(x+y+z > w) break;
                    c++;
                }
                b++;
            }
            a++;
        }
        t++;
    }
    return 0;
}
