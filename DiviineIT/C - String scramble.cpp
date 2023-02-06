#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,i, ans=0;
    string s1,s2;
    cin >> n >> s1 >> s2;
    for(i=0; i<n; i++){
        if(s1[i] != s2[i]){
            ans++;
            while((s1[i] != s2[i]) && i<n){
                i++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

