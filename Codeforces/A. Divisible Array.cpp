#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t,i;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        for(i=1; i<=n; i++){
            if(i!=1) cout << " ";
            cout << i*2;
        }
        cout << endl;
    }
    return 0;
}
