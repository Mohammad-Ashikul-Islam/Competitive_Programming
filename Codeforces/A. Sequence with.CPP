#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
char mx(string s){
    char m=s[0];
    for(ll i=0; i<s.size(); i++) m=max(s[i],m);
    return m;
}
char mn(string s){
    char m=s[0];
    for(ll i=0; i<s.size(); i++) m=min(s[i],m);
    return m;
}
string fnc(ll a,ll k){
    string s=to_string(a);
    while((count(s.begin(),s.end(),'0')==0) && (k!=0)){
        ll temp=(mx(s)-'0')*(mn(s)-'0');
        ll crrnt=stoll(s,nullptr,10)+temp;
        s=to_string(crrnt);
        //s=p;
        //sort(s.rbegin(),s.rend());
        k--;
    }
    return s;
}
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a,k;
        cin >> a >> k;
        if(k==1){cout << a << endl; continue;;}
        string p=fnc(a,k-1);
        cout << p << endl;

    }
    return 0;
}
