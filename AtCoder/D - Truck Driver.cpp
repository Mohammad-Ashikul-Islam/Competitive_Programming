#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll m;
    cin >> m;
    m--;
    vector<ll> v;
    ll temp;
    while(cin >> temp){
        v.push_back(temp);
    }
    sort(v.rbegin(), v.rend());
    cout <<  v[m] << endl;
    return 0;
}
