#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,res,sum=0;
    scanf("%lld%lld",&t,&x);
    sum = min(t,x);
    cout << sum << " ";
    res = max(t,x)-min(t,x);
    cout << res/2 << endl;
    return 0;
}

