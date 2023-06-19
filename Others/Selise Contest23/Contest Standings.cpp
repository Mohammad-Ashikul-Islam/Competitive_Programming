#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,i;
    cin >> n;
    map<ll, string> m;
    for(i=0; i<n; i++){
        string s;
        ll p;
        cin >> s >> p;
        m[p] = s;
    }
    auto it=m.begin();
    cout << "Selise Coding Challenge 2023 Winners\n";
    cout << "Winner: " << it->second << " => " << it->first << endl;
    it++;
    cout << "1st Runner Up: "<< it->second << " => " << it->first << endl;
    it++;
    cout << "2nd Runner Up: "<< it->second << " => " << it->first << endl;

    return 0;
}
