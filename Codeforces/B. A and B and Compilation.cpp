#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,x,sum1=0,sum2=0,sum3=0;
    scanf("%lld",&t);
    for(i=0; i<t; i++){ scanf("%lld",&x); sum1 += x; }
    for(i=0; i<t-1; i++){ scanf("%lld",&x); sum2 += x; }
    for(i=0; i<t-2; i++){ scanf("%lld",&x); sum3 += x; }
    cout << sum1-sum2 << endl << sum2-sum3 << endl;
    return 0;
}
