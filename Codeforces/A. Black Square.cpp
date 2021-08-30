#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    ll ara[5],i,sum=0;
    loop(i,1,5) cin >> ara[i];
    string s;
    cin >> s;
    loop(i,0,s.size()) sum+=ara[s[i]-'0'];
    cout << sum << endl;
    return 0;
}
