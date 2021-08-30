#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,page,temp;
    cin >> n;
    temp = n;
    vector<pair<long long,long long> > v;
    for(long long i=0; i<n; i++){
        long long x,y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    cin >> page;
    for(long long i=0; i<n; i++){
        if(page>=v[i].first && page<=v[i].second){
            temp = i;
            break;
        }
    }
    cout << n-temp << endl;
    return 0;
}
