#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> one;
void fnc()
{
    ll crnt=0,sum=1;
    while(sum<=2147483648){
        sum = sum+crnt;
        one.push_back(sum);
        crnt++;
    }
}
int main()
{
    ll t;
    cin >> t;
    fnc();
    vector<ll> v;
    while(t--){
            ll x;
            cin >>x;
            if( binary_search(one.begin(),one.end(),x)) v.push_back(1);
            else v.push_back(0);
    }
    cout << v[0];
    for(ll i=1; i<v.size(); i++) cout << " "<< v[i];
    cout << endl;
    return 0;
}
