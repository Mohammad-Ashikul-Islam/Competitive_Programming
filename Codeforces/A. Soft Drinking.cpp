#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    long long t1=(k*l)/nl,t2=c*d,t3=p/np;
    cout << min(t1,min(t2,t3))/n << endl;
    return 0;
}
