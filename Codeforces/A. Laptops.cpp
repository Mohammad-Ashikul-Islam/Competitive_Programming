#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,x,y;
    cin >> n;
    vector <pair<long long,long long>> v;
    for(i=0; i<n; i++){
        cin >> x;
        cin >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    bool flag=0;
    for(i=1; i<n; i++){
        if( (v[i-1].first<v[i].first) && (v[i-1].second >v[i].second)) flag=1;
    }
    if(flag==1) cout << "Happy Alex\n";
    else cout << "Poor Alex\n";
    return 0;
}
