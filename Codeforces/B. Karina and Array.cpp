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
        vector<ll> positive,negative,num;
        for(i=0; i<n; i++){
            ll x;
            cin >> x;
            if(x<0) negative.push_back(x);
            else positive.push_back(x);
            num.push_back(x);
        }
        sort(positive.rbegin(), positive.rend());
        sort(negative.begin(),negative.end());
        ll temp1,temp2;
        if(positive.size()>=2) temp1 = positive[0]*positive[1];
        else temp1 = INT_MIN;
        if(negative.size() >=2) temp2 = negative[0]*negative[1];
        else temp2 = INT_MIN;
        if(num.size()<=2) cout << num[0]*num[1] << endl;
        else{
            cout << max(temp1, temp2) << endl;
        }
    }
    return 0;
}
