#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll m,ini;
        cin >> m >> ini;
        ll n = m-ini;
        if(n<0){
            cout << 0 << endl;
            continue;
        }
        ll i;
        for(i=1; ((i*i)+i)<n*2; i++ ){
            int a=5;
        }
        cout << i << endl;

    }
    return 0;
}
