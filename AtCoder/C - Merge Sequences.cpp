#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,m;
    cin >> m >> n;
    vector<ll> x,y;
    ll i;
    for(i=0; i<m; i++){
        ll h;
        cin >> h;
        x.push_back(h);
    }
    for(i=0; i<n; i++){
        ll h;
        cin >> h;
        y.push_back(h);
    }
    ll leftin=0, rightin=0, ls=x.size(), rs=y.size(), ms=ls+rs,in=1;
    while(leftin<ls && rightin<rs){
        if(x[leftin]<=y[rightin]){
            x[leftin]=in;
            in++;
            leftin++;
        }
        else{
            y[rightin]=in;
            in++;
            rightin++;
        }
    }
    while(leftin<ls){
        x[leftin]=in;
        in++;
        leftin++;
    }
    while(rightin<rs){
        y[rightin]=in;
        in++;
        rightin++;
    }
    //printing
    for( i=0; i<x.size(); i++){
        if(i==0) cout << x[i];
        else cout << " "<< x[i];
    }
    cout << endl;
    for(i=0; i<y.size(); i++){
        if(i==0) cout << y[i];
        else cout << " " << y[i];
    }
    cout << endl;
    return 0;
}
