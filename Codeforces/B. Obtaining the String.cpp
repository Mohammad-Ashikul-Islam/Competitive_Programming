#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    ll n;
    string s,p;
    cin >>n >> s >>p;
    if(s==p) {cout << 0 << endl << endl; return 0;}
    string q=s,r=p;
    sort(q.begin(),q.end());
    sort(r.begin(),r.end());
    if(q!=r) cout << "-1\n";
    else{
        vector<ll> d;
        ll i,j;
        bool e=true;
        for(i=0,j=0;i<p.size(); i++,j++){
                if(d.size()>10000) {e=false;break;}
            if(s[i]==p[j]) continue;
            else{
                    ll k;
                for(k=j+1; s[k]!=p[i]; k++){;}
                ll ind=k;
                while(k!=j){
                    d.push_back(k);
                    char temp=s[k];
                    s[k]=s[k-1];
                    s[k-1]=temp;
                    k--;
                }
            }
        }
        if(e==false)cout << "-1\n";
        else{
            cout << d.size() << endl <<d[0];
            for(ll m=1; m<d.size(); m++) cout << " " << d[m];
            cout << endl;
        }
    }
    return 0;
}
