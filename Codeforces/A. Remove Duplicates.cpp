#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long n;
    cin >> n;
    long long ara[n];
    for(ll i=0; i<n; i++) cin >> ara[i];
    vector<ll> v;
    for(ll i=0; i<n;i++){
        long long x=ara[i];
        bool flag=false;
        for(ll j=i+1; j<n; j++){
            if(ara[j]==x){flag=true; break;}
        }
        if(flag==true) continue;
        else
            v.push_back(x);
    }
    cout << v.size()<<endl << v[0];
    for(ll i=1; i<v.size(); i++) cout << " " << v[i];
    cout << endl;
    return 0;
}
