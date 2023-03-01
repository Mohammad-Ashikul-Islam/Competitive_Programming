#include<bits/stdc++.h>
using namespace std;

#define ll long long

map<string,int> m;
string p = "FBFFBFFBFB",q;

void fnc(){
    string s;
    for(int i=1; s.size()<=75; i++){
        if(i%15==0){
            s.push_back('F');
            s.push_back('B');
            m[s] = 1;
        }
        else if(i%5==0){
            s.push_back('B');
            m[s] = 1;
        }
        else if(i%3==0){
            s.push_back('F');
            m[s] = 1;
        }
    }
    q = s;
}

int main()
{
    fnc();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if(q.find(s) != string::npos) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
