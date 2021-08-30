#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i;
    cin >> n;
    int ara[n];
    for(i=0; i<n; i++) cin >> ara[i];
    deque<ll> d;
    ll max_current=1,max_total=1;
    d.push_back(ara[0]);
    for(i=1; i<n; i++){
        if(ara[i]>=d.back()){
            max_current++;
            d.push_back(ara[i]);
            if(max_total<max_current) max_total=max_current;
        }
        else{
            if(max_total<max_current) max_total=max_current;
            d.clear();
            max_current=1;
            d.push_back(ara[i]);
        }
    }
    cout << max_total << endl;
    return 0;
}
