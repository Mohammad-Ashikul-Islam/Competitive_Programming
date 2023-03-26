#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes "YES"
#define no "NO"
#define endl "\n"

int main()
{
    ll n;
    cin >> n;
    ll c=0;
    unordered_map<int,int> m;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        if(m.find(x) != m.end()){
            if(m[x]>0){
                m[x]--;
                c++;
            }
            else m[x]++;
        }
        else{
            m[x]=1;
        }
    }
    cout << c << endl;
    return 0;
}
