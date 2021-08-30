#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,t,a1=0,b1=0,c1=0,a2=0,b2=0,c2=0;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if(a==1){
            a1++; b1+=b; c1+=c;
        }
        else{
            a2++; b2+=b; c2+=c;
        }
    }
    a1 = a1*10; a2=a2*10;
    if(b1>=(a1/2)) cout << "LIVE\n";
    else cout << "DEAD\n";
    if(b2>=(a2/2))cout << "LIVE\n";
    else cout << "DEAD\n";
    return 0;
}
