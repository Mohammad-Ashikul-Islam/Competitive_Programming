#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long

ll fnc(ll num)
{
    string s=to_string(num);
    //if(s.size()==1) return num;
    sort(s.begin(),s.end());
    ll d = s[s.size()-1]-s[0];
    return d;
}

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll left,right;
        cin >> left >> right;
        ll j=1;
        ll ans=left,d=100;
        for(ll i=left; i<=right; i++,j++){
            ll temp = fnc(i);
            //cout << "temp: " << temp << endl;
            if(temp < d){
                ans = i;
                d = temp;
            }
        }
        cout << ans << endl;
        //cout << "ans: " << ans << endl;
    }
    return 0;
}
