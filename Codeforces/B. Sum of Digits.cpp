#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
ll fnc(ll sum){
    ll p=0;
    while(sum!=0){
        p+=sum%10;
        sum/=10;
    }
    return p;
}
int main()
{
    string s;
    cin >>s;
    if(s.size()==1) {
            cout << 0 << endl;
            return 0;
    }
    ll c=1,sum=0,i;
    for(i=0; i<s.size(); i++) sum+=(s[i]-'0');
    while(sum>9){
        sum=fnc(sum);
        c++;
    }
    cout << c << endl;
    return 0;
}
