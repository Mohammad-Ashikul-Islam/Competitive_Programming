#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll t,i;
    cin >> t;
    for(i=0; i<t; i++){
        ll x;
        cin >> x;
        if(x==1) {cout << "0" << endl; continue;}
        else if(x==2) {cout << "1" << endl; continue;}
        else if(x==3) {cout << "7" << endl; continue;}
        if(x%2==1) {cout << "7"; x-=3;}
        while(x>=4){
            cout << "1";
            x-=2;
        }
        if(x==3) cout << "7\n";
        else if(x==2) cout << "1\n";
    }
    return 0;
}
