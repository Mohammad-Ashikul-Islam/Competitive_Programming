#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll t;
    cin >>t;
    while(t--){
        string s;
        cin >> s;
        if(s.size()<=10) cout << s << endl;
        else cout<< s[0] << s.size()-2 << s[s.size()-1] << endl;
    }
    return 0;
}
