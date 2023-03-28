#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> v;
void fnc()
{
    ll i,j;
    for(i=1; i<=999999; i=i*10){
        for(j=1; j<=9; j++) v.push_back(i*j);
    }
}

int main()
{
    fnc();
    ll t;
    cin>> t;
    while(t--){
        ll n;
        cin >> n;
        ll c=0,i=0;
        for(ll i=0; i<v.size(); i++){
            if(v[i]>n) break;
            else c++;
        }
        cout << c << endl;
    }
    return 0;
}

