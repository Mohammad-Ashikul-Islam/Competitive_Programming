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
        string s;
        vector<ll> left,right;
        cin >> s;
        bool flag=true;
        for(ll i=0; i<s.size(); i++){
            ll temp = s[i]-'0';
            if(temp%2==0){
                left.push_back(temp/2);
                right.push_back(temp/2);
            }
            else if(flag==true){
                left.push_back((temp/2+1));
                flag=false;
                right.push_back(temp/2);
            }
            else{
                left.push_back(temp/2);
                right.push_back((temp/2)+1);
                flag = true;
            }
        }
        ll ans1=left[0], ans2=right[0];
        for(ll i=1; i<left.size(); i++) ans1 = (ans1*10)+left[i];
        for(ll i=1; i<right.size(); i++) ans2 = (ans2*10)+right[i];
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}
