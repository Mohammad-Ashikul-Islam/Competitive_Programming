#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define in cin>>
#define out cout<<
long long fnc(ll ara[],ll n)
{
    ll i,j,lis[n];
    lis[0]=1;
    for(i=1; i<n; i++){
            lis[i]=1;
        for(j=0; j<i; j++){
            if((ara[i]>ara[j]) && (lis[j]+1>lis[i])) lis[i]=lis[j]+1;
        }
    }
    ll mx =*max_element(lis,lis+n);
    return mx;
}
int main()
{
    ll n,i;
    in n;
    ll ara[n];
    for(i=0; i<n; i++) in ara[i];
    out fnc(ara,n) << endl;
    return 0;
}
