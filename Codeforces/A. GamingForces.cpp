#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll one=0,i;
        for(i=0; i<n; i++){
            ll temp;
            cin >> temp;
            if(temp==1) one++;
        }
        ll c;
        if(one%2==0) c=one/2;
        else c=(one/2)+1;
        c=c+(n-one);
        cout << c << endl;
    }
    return 0;
}

