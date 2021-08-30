#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c,i,x,mx=0,mx_e=INT_MIN;
    vector<long long> v,d;
    cin >> n >> c;
    v.push_back(INT_MIN);
    for(i=1; i<=n; i++){
        cin >>x;
        v.push_back(x);
        if(i==1) continue;
        if(v[i-1]-v[i]>mx_e){ mx=i; mx_e=v[i-1]-v[i]; }
    }
    if((v[mx-1]-v[mx]-c) > 0) cout << v[mx-1]-v[mx]-c << endl;
    else cout << 0 << endl;
    return 0;
}
