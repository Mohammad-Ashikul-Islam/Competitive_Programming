#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << s;
        reverse(s.begin(),s.end());
        cout << s<<endl;
    }
    return 0;
}
