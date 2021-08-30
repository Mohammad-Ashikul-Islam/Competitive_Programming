#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define ss scanf
int main()
{
    ll n,k;
    cin >> n;
    if(n<=2){ cout << "No\n"; return 0;}
    else if(n==3){cout << "Yes\n"; cout << 1 << " " << 2 <<endl; cout <<"2 1 3\n"; return 0; }
    cout << "Yes\n";
    k=n/2;
    vector<ll> a,b;
    bool g=false;
    for(ll i=1,j=1,r=n; i<=k; i++,j++,r--){
        if(g==false){a.push_back(j); a.push_back(r); g=true;}
        else{b.push_back(j); b.push_back(r); g=false;}
    }
    if(n%2==1) a.push_back((n/2)+1);
    cout << a.size() << " "<< a[0];
    for(ll i=1; i<a.size(); i++) cout <<" " <<a[i];
    cout << endl;
    cout << b.size() << " " << b[0];
    for(ll j=1; j<b.size(); j++) cout << " "<< b[j];
    cout << endl;
    return 0;
}
