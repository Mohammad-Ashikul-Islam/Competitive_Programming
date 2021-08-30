#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
//these days are hard
bool fnc(string& p,string& s)
{
    do{
        if(p>=s){return true;}
        else if(p.size()>s.size()) return true;
    }while(next_permutation(p.begin(),p.end()));
    return false;
}
int main()
{
    string s,p;
    cin >> s;
    ll l=s.size(),i,j,four_count=0,seven_count=0,extra_digit=0,index;
    if(l%2!=0) l++;
    four_count=seven_count=l/2;
    for(i=0; i<four_count; i++) p.push_back('4');
    for(i=0; i<seven_count; i++) p.push_back('7');
    bool b=fnc(p,s);
    if(b==true) {cout <<p << endl; return 0;}
    sort(p.begin(),p.end());
    p.push_back('7');
    p="4"+p;
    cout<<p << endl;
    return 0;
}
