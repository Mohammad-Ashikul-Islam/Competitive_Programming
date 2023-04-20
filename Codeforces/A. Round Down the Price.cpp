#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll pow10(ll power){
    ll sum=1,i;
    for(i=1; i<=power; i++) sum*=10;
    return sum;
}

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n==1) cout << 0 << endl;
        else if(n<=9) cout << n-1 << endl;
        else{
            double p = log10(n);
            ll power = floor(p);
            ll temp = pow10(power);
            cout << n-temp << endl;
        }
    }
    return 0;
}

