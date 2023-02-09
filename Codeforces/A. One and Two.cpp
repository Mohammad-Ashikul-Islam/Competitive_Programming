#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v;
        ll i,two=0;
        for(i=0; i<n; i++){
            ll temp;
            cin >> temp;
            v.push_back(temp);
            if(temp%2==0) two++;
        }
        if(two%2==1) cout << "-1\n";
        else if(two==0) cout << "1\n";
        else{
            ll c=0,ans;
            for(i=0; i<v.size(); i++ ){
                if(v[i]==2) c++;
                if(c == (two/2)) break;
            }
            cout << i+1 << endl;
        }
    }
    return 0;
}
