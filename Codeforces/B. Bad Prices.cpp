#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(long long index=start; index<limit; index++)
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,b=0,cm;
        cin >> n;
        ll ara[n],i,j;
        loop(i,0,n) cin >> ara[i];
        for(i=n-1; i>=0; i--){
            if(i==n-1) cm=ara[i];
            if(cm<ara[i]) b++;
            else cm=ara[i];
        }
        cout << b << endl;
    }
    return 0;
}
