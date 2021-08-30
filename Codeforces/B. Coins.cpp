#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    string s;
    map<char,int> m;
    vector<int> v;
    m['A'] = 0;
    m['B'] =0;
    m['C']=0;
    for(ll i=0; i<3; i++){
        cin >> s;
        if(s[1]=='>') m[s[0]]++;
        else m[s[2]]++;
    }
    map<int,char> ans;
    for(auto it=m.begin(); it!=m.end(); it++){
        ans[it->second]=it->first;
        v.push_back(it->second);
    }
    sort(v.begin(),v.end());
    if(v[0]!=0 || v[1]!=1 || v[2]!=2){cout << "Impossible\n"; return 0; }
    for(auto it=ans.begin(); it!=ans.end(); it++) cout << it->second;
    cout << endl;
    return 0;
}

