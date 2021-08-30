#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    ll n,c=0,k;
    cin >> n;
    ll x=1,y=n*n,j;
    for(ll i=1; i<=n; i++){
        bool t=true;
        for(j=1; j<=n/2; j++){
            if(k==false) cout << " ";
            cout << x << " " << y;
            x++; y--; k=false;
        }
        cout << endl;
        k=true;
    }

    return 0;
}
