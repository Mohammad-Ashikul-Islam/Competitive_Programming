#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll n,m,i,j;
    cin >> n >> m;
    string s;
    for(i=0; i<m; i++){
        s.push_back('a'+i);
    }
    for(j=0; i<n; i++,j++){
        s.push_back(s[j]);
    }
    cout << s << endl;
    return 0;
}
