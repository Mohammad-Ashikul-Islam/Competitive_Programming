#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n==1 || n==2) cout << 1 << endl;
        else if(n==3) cout << 2 << endl;
        else if(n%2==0) cout << n/2 << endl;
        else cout << (n/2)+1 << endl;
    }
    return 0;
}
