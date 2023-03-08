#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
    ll h,a,sa;
    cin >> h >> a >>sa;
    ll c=0;
    if(sa>a){
        h-=sa;
        c++;
    }
    while(h>0){
        c++;
        h-=a;
    }
    cout << c << endl;
    }
    return 0;
}
