#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll i,n;
    cin >> n;
    string s;
    cin >> s;
    map<string,ll> m;
    for(i=1; i<s.size(); i++){
        string k;
        k.push_back(s[i-1]);
        k.push_back(s[i]);
        if(m.find(k)!=m.end()) m[k]++;
        else m[k]=1;
    }
    ll mx= LONG_LONG_MIN;
    string k;
    for(auto it=m.begin(); it!=m.end(); it++){
        if(it->second > mx){
            mx=it->second;
            k=it->first;
        }
    }
    cout << k << endl;
    return 0;
}
