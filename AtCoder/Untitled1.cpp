#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t, i;
    cin >> t;
    for(i=1; i<=t; i++){
        ll a, b;
        cin >> a >> b;
        ll sum=0;
        for(; a<=b; a++){
            if(a%2==1) sum+= a;
        }
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}
