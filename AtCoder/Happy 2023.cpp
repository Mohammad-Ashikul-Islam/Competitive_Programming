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
        ll p, q, i;
        for(i=2; i*i*i <= n; i++){
            if(n%i != 0) continue;
            if(n%i==0){
                if(n % (i*i)==0){
                    p = i;
                    q = n / (i*i);
                    break;
                }
                else {
                    q=i;
                    double pp = (n / i);
                    pp = round(sqrt(pp));
                    p = (ll) pp;
                    break;
                }
            }
        }
        cout << p << " " << q << endl;
    }
    return 0;
}
