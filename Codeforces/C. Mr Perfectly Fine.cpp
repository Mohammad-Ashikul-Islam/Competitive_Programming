#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> time(n);
        vector<char> l(n),r(n);
        ll left=-1,right=-1,ans=-1,i;
        for(i=0; i<n; i++){
            cin >> time[i];
            string p;
            cin >> p;
            l[i] = p[0];
            r[i] = p[1];
            if(p=="11"){
                if(ans==-1) ans = time[i];
                else ans = min(ans,time[i]);
            }
        }
        //search left
        for(i=0; i<n; i++){
            if(l[i]=='1'){
                if(left==-1) left = time[i];
                else left = min(left,time[i]);
            }
        }
        //search right
        for(i=0; i<n; i++){
            if(r[i]=='1'){
                if(right==-1) right = time[i];
                else right = min(right,time[i]);
            }
        }
        //print
        if(left==-1 || right == -1){
             cout << -1 << endl;
             continue;
        }
        ans = left+right;
        for(i=0; i<n; i++){
            if(l[i]=='1' && r[i]=='1') ans = min(ans,time[i]);
        }
         cout << ans << endl;
    }
    return 0;
}
