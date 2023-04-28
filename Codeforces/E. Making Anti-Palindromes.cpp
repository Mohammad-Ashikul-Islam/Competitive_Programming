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
        string s;
        cin >> s;
        if(n%2==1){
            cout << -1 << endl;
            continue;
        }
        if(n==2){
            if(s[0]==s[1]) cout << "-1\n";
            else cout << 0 << endl;
            continue;
        }
       int ara[26]={0},i;
       for(i=0; i<n; i++) ara[s[i]-'a']++;
       ll limit=n/2,j;
       bool flag = true;
       for(i=0; i<26; i++){
        if(ara[i]>limit) flag=false;
       }
       if(flag == false){
        cout << -1 << endl;
            continue;
       }
       ll ans = 0;
       for(i=0; i<26; i++) ara[i] = 0;
       for(i=0,j=n-1; i<j; i++,j--){
            if(s[i] == s[j]){
                ans++;
                ara[s[i]-'a']++;
            }
       }
       ll print=(ans+1)/2;
       for(i=0; i<26; i++){
        if(ara[i]>(ans/2)){
            print = ara[i];
        }
       }
       cout << print << endl;
    }
    return 0;
}

