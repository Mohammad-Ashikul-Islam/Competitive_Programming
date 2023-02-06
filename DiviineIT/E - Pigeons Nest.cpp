#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,m, ans;
    cin >> n >> m;
    if(n%m==0) cout << n/m << endl;
    else cout << (n/m)+1 << endl;
    return 0;
}
