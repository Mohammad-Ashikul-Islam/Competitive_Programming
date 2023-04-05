#include<bits/stdc++.h>
using namespace std;

#define ll long long

void fnc(vector<ll>& v, ll n){
    ll c=1;
    while(n != 1){
        c++;
        if( (n/2)%2==1 ){
            v.push_back(2);
            n = n/2;
        }
        else{
            v.push_back(1);
            n = (n/2)+1;
        }
        if(c==40) break;
    }
    reverse(v.begin(),v.end());
}

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,i;
        cin >> n;
        if(n%2==0){
            cout << "-1\n";
            continue;
        }
        if(n==1){
            cout << 1 << endl << 1 << endl;
            continue;
        }
        vector<ll> v;
        fnc(v,n);
        //cout << "Ans: \n";
        cout << v.size() << endl;
        for(i=0; i<v.size(); i++){
            if(i!=0) cout << " ";
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}
