#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,i,c=0;
        cin >> n;
        for(i=0; i<n; i++){
            ll temp;
            cin >> temp;
            if(temp%2==1) c++;
        }
        cout << c << endl;
    }
    return 0;
}
