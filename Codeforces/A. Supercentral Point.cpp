#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)

int main()
{
    long long n,c=0;
    cin >> n;
    vector<pair<long long,long long>> v;
    for(long long i=0; i<n; i++){
        long long x,y;
        cin >> x >>y;
        v.push_back(make_pair(x,y));
    }
    for(long long i=0; i<n; i++){
        long long upper=0,lower=0,left=0,right=0;
        for(long long j=0; j<n; j++){
            if(i==j) continue;
            if(v[j].first>v[i].first && v[j].second==v[i].second ) right++;
            if(v[j].first<v[i].first && v[j].second==v[i].second ) left++;
            if(v[j].first==v[i].first && v[j].second<v[i].second ) lower++;
            if(v[j].first==v[i].first && v[j].second>v[i].second ) upper++;
            if(lower>0 && upper>0 && left>0 && right >0) break;
        }
       if(lower>0 && upper>0 && left>0 && right >0) c++;
    }
    cout << c << endl;
    return 0;
}
