#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
        vector<ll> even,odd;
        ll temp, i,n;
        cin >> n;
        for(i=0; i<n; i++){
            cin >> temp;
            if(temp%2==0) even.push_back(i+1);
            else odd.push_back(i+1);
        }
        if(odd.size()>=3) cout << "YES " << odd[0] << " " << odd[1] << " " << odd[2] << endl;
        else if(odd.size()>=1 && even.size()>=2)
            cout << "YES " << even[0] << " " << even[1] << " " << odd[0] << endl;
        else cout << "NO\n";
    }
    return 0;
}
