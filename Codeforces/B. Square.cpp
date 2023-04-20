#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        ll area = (a*b)+(c*d);
        ll temp = sqrt(area);
        if(a<b) swap(a,b);
        if(c<d) swap(c,d);
        if( (temp*temp) == area && a==c && b+d==a) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

