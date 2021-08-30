#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
ll josephus_number(ll n){
    if(__builtin_popcount(n)==1) return 1;
    ll temp= 2*(n- pow(2,floor(log2(n-1))));
    return temp+1;
}
int main()
{
    ll n;
    while(cin >> n){
            ll cost=0,p=1;
            while(1){
                ll r=josephus_number(n);
                if(r!=n) cost+=(n-r);
                else{cost += n*2; break;}
                n=r;
            }
            cout << cost << endl;
    }
    return 0;
}
