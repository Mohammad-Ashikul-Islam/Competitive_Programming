#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >>t;
    while(t--){
        ll n,i,sum=0,j=1;
        cin >> n;
        for(i=0; i<n; i++,j++){
            ll temp;
            cin >> temp;
            sum = sum+(temp*j);
        }
        cout << sum << endl;
    }
    return 0;
}
