#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(long long index=start; index<limit; index++)
int main()
{
    ll i,j,k;
    cin >> k;
    ll ara[12];
    loop(i,0,12){
        cin >> ara[i];
    }
    if(k==0) {cout << 0 << endl; return 0; }
    sort(ara,ara+12,greater<ll>());
    ll sum=0,c=0;
    loop(i,0,12){
        if(sum>=k) break;
        sum+=ara[i],c++;
    }
    if(sum<k) cout << -1 << endl;
    else cout << c << endl;
    return 0;
}

