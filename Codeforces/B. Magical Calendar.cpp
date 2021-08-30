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
    ll n,r;
    while(t--){
        cin >> n >> r;
        if(r<n) cout << (r*(r+1))/2 << endl;
        else{
            n--;
            cout << ((n*(n+1))/2)+1 << endl;
            //n er pore ja ashbe,tar sob e duplicate,kono unique pattern pawa jabena
            //so n poroborti sob pattern n er sathe milbe
            //ar n tomo er jonno kebol ektai pattern possible,sob ghor fill kora
            //but 1 thekhe n er ag porjonto sob i tomo ghore i ta pattern pawa jai
            //so soution is,1 thekhe n-1 porjonto sob songkhar jogfol+1(1 for n tomo ghorer jonno)
        }
    }
    return 0;
}

