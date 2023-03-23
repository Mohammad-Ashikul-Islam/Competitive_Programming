#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll i,sum=0;
        string s;
        cin >> s;
        for(i=0; i<s.size(); i++){
            if(i==0){
                sum += s[i]-'0';
                continue;
            }
            char ch;
            if(s[i]=='0') ch='+';
            else if(s[i]=='1' && sum > 0){
                ch = '-';
                sum--;
            }
            else{
                ch = '+';
                sum++;
            }
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
