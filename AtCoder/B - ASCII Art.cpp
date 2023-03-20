#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll m,n;
    cin >> m >> n;
    int ara[m][n];
    for(ll i=0; i<m; i++){
        for(ll j=0; j<n; j++){
            cin >> ara[i][j];
        }
    }
    for(ll i=0; i<m; i++){
        for(ll j=0; j<n; j++){
            if(ara[i][j]==0) cout << ".";
            else{
                cout << (char)('A'+(ara[i][j]-1));
            }
        }
        cout << endl;
    }
    return 0;
}
