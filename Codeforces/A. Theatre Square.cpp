#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,a;
    cin >> m >> n >> a;
    long long c=0,b=a;
    long long t=m/a;
    if(m%a==0) c = t;
    else c = t+1;
    long long r=n/a;
    if(n%a==0) ;
    else r++;
    if(c==0) c = r;
    else c *=r;
    cout << c << endl;
    return 0;
}
