#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        map<char,int> m;
        m['c']=0;
        m['o']=0;
        m['d']=0;
        m['e']=0;
        m['h']=0;
        m['f']=0;
        for(int i=0; i<n; i++){
            cin >> s;
            for(int j=0; j<s.size(); j++){
            if(s[j]=='c' || s[j]=='o' || s[j]=='d' || s[j]=='e' || s[j]=='h' || s[j]=='f')
                    m[s[j]]++;
            }
        }
        m['e'] = m['e']/2; m['c']= m['c']/2;
            int ans=min(m['c'],min(m['o'],min(m['d'],min(m['e'],min(m['h'],m['f'])))));
            cout << ans << endl;
    }
    return 0;
}
