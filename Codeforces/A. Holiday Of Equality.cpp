#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,x,sum=0;
    vector <long long> v;
    scanf("%lld",&t);
    for(i=0; i<t; i++){ scanf("%lld",&x); v.push_back(x); }
    sort(v.begin(),v.end());
    x = v.back();
    for(i=0; i<t; i++)  sum += (x-v[i]);
    cout << sum << endl;
    return 0;
}
