#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
//these days are hard
int main()
{
    string s;
    vector<pair<ll,ll>> v;
    cin >> s;
    ll i,l=s.size();
    loop(i,0,l-1){
        if(s[i]=='A' && s[i+1]=='B'){
            for(ll j=i+2; j<l-1; j++){
                if(s[j]=='B' && s[j+1]=='A'){cout << "YES"<<endl; return 0;}
            }
        }
        else if(s[i]=='B' && s[i+1]=='A'){
            for(ll j=i+2; j<l-1; j++){
                if(s[j]=='A' && s[j+1]=='B'){cout << "YES"<<endl; return 0;}
            }
        }
    }
    cout << "NO\n";
    return 0;
}

