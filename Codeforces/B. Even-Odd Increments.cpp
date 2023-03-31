#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        ll oddsum=0, oddnum=0, evensum=0, evennum=0;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            if(x%2==0) evensum+=x,evennum++;
            else oddnum++, oddsum+=x;
        }
        for(ll i=0; i<q; i++){
            ll type, num;
            cin >> type >> num;
            if(type==0){
                if(num%2==0) evensum += (evennum*num);
                else{
                    oddsum += (evensum+(evennum*num));
                    evensum=0;
                    oddnum += evennum;
                    evennum=0;
                }
            }
            else{
                if(num%2==0) oddsum += (oddnum*num);
                else{
                    evensum += (oddsum+(oddnum*num));
                    oddsum = 0;
                    evennum +=oddnum;
                    oddnum=0;
                }
            }
            cout <<evensum+oddsum << endl;
        }
    }
    return 0;
}

