#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    for(ll i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i] <= 'Z'){
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}
