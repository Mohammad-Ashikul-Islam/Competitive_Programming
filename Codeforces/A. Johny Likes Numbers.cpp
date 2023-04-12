#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,k;
    cin >> n >> k;
    ll temp = k-(n%k);
    ll ans = n+temp;
    cout << ans << endl;
    return 0;
}

