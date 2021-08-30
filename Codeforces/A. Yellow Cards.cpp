#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define ss scanf
ll fnc1(ll a1,ll a2,ll k1,ll k2,ll n){
    ll c=0,ind1,ind2,x1,x2;
    if(k1>k2) x1=k2,ind1=a2,x2=k1,ind2=a1;
    else x1=k1,x2=k2,ind1=a1,ind2=a2;
    while(n>0 && ind1>0){
            if(n-x1<0) break;
            n-=x1;
            c++;
            ind1--;
    }
    while(n>0 && ind2>0){
        if(n-x2<0) break;
        n-=x2;
        c++; ind2--;
    }
    return c;
}
ll fnc2(ll a1,ll a2,ll k1,ll k2,ll n){
    ll mxl=(k1-1)*a1+(k2-1)*a2,mxn=a1+a2,c=0;
    if(n<=mxl) return 0;
    n-=mxl;
    while(n>0 && mxn>0){
        n--;
        mxn--;
        c++;
    }
    return c;
}
int main()
{
    ll a1,a2,k1,k2,n,mx,mn;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    mx=fnc1(a1,a2,k1,k2,n);
    mn=fnc2(a1,a2,k1,k2,n);
    cout << mn << " " << mx << endl;
    return 0;
}
