#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,k,sum=0,total_sum=0;
        cin >> n >> k;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
            total_sum += v[i];
        }
        sort(v.begin(),v.end());
        ll i=0,j=n-1;
        if(k<ceil(n/2.0)){
            ll cs = 1;
            sum = 0;
            for(; cs <=k && i<=j; cs++){
                if(v[i]+v[i+1] < v[j]){
                    sum+= (v[i+1]+v[i]);
                    i = i+2;
            }
            else if(v[i]+v[i+1]==v[j]){
                sum += v[j];
                j--;
            }
            else{
                sum += v[j];
                j--;
                }
            }
            ll sum2=0;
            cs = 1,j=n-1;
            for(; cs<=k; j--,cs++) sum2 +=v[j];
            ll sum3=0;
            cs=1,i=0;
            for(; i<n && cs<=k*2; i++,cs++) sum3 +=v[i];
            if(cs==k*2+1) sum2 = min(sum2,sum3);
            total_sum -= min(sum,sum2);
        }
        else{
            ll cs=1;
            for(; cs<=k && j>=0; cs++ ){
                total_sum -= v[j];
                j--;
            }
        }
        cout << total_sum << endl;
    }
    return 0;
}
