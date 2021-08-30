#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,res,sum=1;
    scanf("%lld%lld",&t,&x);
    res = t;
    while((res%10!=0) && (res%10!= x)) {
        sum++;
        res += t;
    }
    cout << sum << endl;
    return 0;
}

