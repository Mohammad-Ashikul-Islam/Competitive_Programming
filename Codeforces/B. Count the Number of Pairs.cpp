#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll l,k,i;
        cin >> l >> k;
        string s;
        cin >> s;
        int sum=0;
        int v[26]={0};
        for(i=0; i<s.size(); i++){
            char ch = s[i];
            if(ch>='a' && ch<='z') {
                    if(v[ch-'a']<0) sum++;
                    v[ch-'a']++;
            }
            else{
                ch = tolower(ch);
                if(v[ch-'a']>0) sum++;
                v[ch-'a']--;

            }
        }
        for(i=0; i<26 && k>0; i++){
            if(v[i]==0 || v[i]==1 || v[i]==-1) continue;
            int temp = abs(v[i])/2;
            if(k>=temp){
                sum += temp;
                k -= temp;
            }
            else{
                sum += k;
                k=0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
