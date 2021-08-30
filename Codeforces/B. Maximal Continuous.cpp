#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,max=0,ns=0;
    cin>>n;
    bool ara[n];
    for(i=0; i<n; i++){
        cin >> ara[i];
        if(ara[i]==1) max++;
        else max=0;
        if(ns<max) ns=max;
    }
    if(ara[n-1]==1){
        for(i=0; i<n && ara[i]==1; i++) max++;
    }
    if(ns<max) ns=max;
    cout << ns;
    cout << endl;
    return 0;
}
