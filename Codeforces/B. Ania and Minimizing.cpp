#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)

int main()
{
    ll n,k;
    string s;
    cin>>n >> k >> s;
    if(k==0){cout << s << endl; return 0;}
    if(n==1){cout << 0 << endl; return 0;}
    for(ll i=0; i<n; i++){
        if(k==0) break;
        if(s[i]!='1' && i==0) s[i]='1',k--;
        else if(s[i]=='1' && i==0) continue;
        else if(s[i]=='0') continue;
        else s[i]='0',k--;
    }
    cout << s << endl;
    return 0;
}
