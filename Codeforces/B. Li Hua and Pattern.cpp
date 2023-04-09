#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,k,i,j,x,y;
        cin >> n >> k;
        ll ara[n][n];
        for(i=0; i<n; i++){
            for(j=0; j<n; j++) cin >> ara[i][j];
        }
        ll required=0;
        for(i=0,x=n-1; i<n; i++,x--){
            for(j=0,y=n-1; j<n; j++,y--){
                if(ara[i][j] != ara[x][y]) required++;
            }
        }
        required=required/2;
        if(k<required) cout << "NO\n";
        else if(k==required) cout << "YES\n";
        else{
            ll temp = (k-required);
            if(n%2==1) cout << "YES\n";
            else if(temp%2==1) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}

