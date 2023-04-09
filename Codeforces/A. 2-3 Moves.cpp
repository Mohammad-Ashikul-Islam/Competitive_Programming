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
        ll sum=0;
        if(n==1){
            cout << 2 << endl;
            continue;
        }
        while(n%3 != 0){
            sum++;
            n-=2;
        }
        sum += n/3;
        cout << sum << endl;
    }
    return 0;
}

