#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a,b,x,y;
        ll c=0;
        cin >> a >> b >> x >> y;
        if(x>a){
            c= x-a;
            a = x;
            b=b+c;
        }
        else{
            c = a-x;
            a = x;
        }
        if(b>y){
            cout << -1 << endl;
            continue;
        }
        ll temp = y-b;
        c += temp;
        b = y;
        a += temp;
        if(x>a){
            cout << -1 << endl;
            continue;
        }
        else{
            temp = a-x;
            c+= temp;
        }
        cout << c << endl;
    }
    return 0;
}
