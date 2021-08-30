#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    vector<int> ar;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        ar.push_back(x);
    }
    map<long long,short int> s;
    vector<pair<int,int>> v;
    long long y,k=0;
    for(int j=0;j<b;j++){
        cin>>y;
        if(k==(a+b-1)) continue;
        for(int i=0;i<ar.size();i++){
                if(k==(a+b-1)) continue;
            if(s[ar[i]+y] == 1) continue;
            else {
                v.push_back(make_pair(i,j));
                s[ar[i]+y]=1;
                k++;
            }
        }

    }
    for(int i=0; i<v.size(); i++) cout << v[i].first << " " << v[i].second << endl;
    return 0;
}

