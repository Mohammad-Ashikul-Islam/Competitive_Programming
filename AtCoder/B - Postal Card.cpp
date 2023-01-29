#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m,i,c=0;
    cin >> n >> m;
    vector<string> s1,s2;
    for(i=0; i<n; i++){
        string s;
        cin >> s;
        s1.push_back(s);
    }
    for(i=0; i<m; i++){
        string s;
        cin >> s;
        s2.push_back(s);
    }
    for(i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(s1[i][5]==s2[j][2] && s1[i][4]==s2[j][1] && s1[i][3]==s2[j][0]){
                c++;
                break;
            }
        }
    }
    cout << c << endl;
    return 0;
}

