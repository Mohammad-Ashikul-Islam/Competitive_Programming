#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,i;
        cin >> n;
        vector<ll> v(3,0);
        unordered_map<string,int> a,b,c;
        for(i=0; i<n; i++){
            string s;
            cin >> s;
            a[s]=1;
        }
        for(i=0; i<n; i++){
            string s;
            cin >> s;
            b[s]=1;
        }
        for(i=0; i<n; i++){
            string s;
            cin >> s;
            c[s]=1;
        }
        for(auto it=a.begin(); it!=a.end(); it++){
            if(b.find(it->first) != b.end() && c.find(it->first) != c.end()) v[0]+=0;
            else if(b.find(it->first) != b.end()) v[0]++;
            else if( c.find(it->first) != c.end()) v[0]++;
            else v[0]+=3;
        }
        for(auto it=b.begin(); it!=b.end(); it++){
            if(a.find(it->first) != a.end() && c.find(it->first) != c.end()) v[1]+=0;
            else if(a.find(it->first) != a.end()) v[1]++;
            else if( c.find(it->first) != c.end()) v[1]++;
            else v[1]+=3;
        }
        for(auto it=c.begin(); it!=c.end(); it++){
            if(b.find(it->first) != b.end() && a.find(it->first) != a.end()) v[2]+=0;
            else if(b.find(it->first) != b.end()) v[2]++;
            else if( a.find(it->first) != a.end()) v[2]++;
            else v[2]+=3;
        }
        cout << v[0] << " " << v[1] << " " << v[2] << endl;
    }
    return 0;
}

