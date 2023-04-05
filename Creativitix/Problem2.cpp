#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n;
    cin >> n;
    ll zero=0,one=0,minusOne=0,ans=0,i;
    for(i=0; i<n; i++){
        ll x;
        cin >> x;
        if(x>0){
            ans += (x-1);
            one++;
        }
        else if(x<0){
            ans += (abs(x)-1);
            minusOne++;
        }
        else zero++;
    }
    if(minusOne%2==1){
        if(zero>0){
            ans++;
            zero--;
            minusOne++;
        }
        else if(one>0){
            minusOne++;
            one--;
            ans +=2;
        }
        else{
            minusOne--;
            one++;
            ans += 2;
        }
    }
    ans += zero;
    cout << ans << endl;
    return 0;
}
