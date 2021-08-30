#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll n;
    cin >>n;
    string s;
    cin >>s;
    ll a=0,d=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='A') a++;
        else d++;
    }
    if(a==d) cout <<"Friendship\n";
    else if(a>d) cout << "Anton\n";
    else cout << "Danik\n";
    return 0;
}
