#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll n,l,k;
    cin >> n >>l;
    vector<string> v,f,r;
    map<string,ll> cnt;
    for(k=1; k<=n; k++){
        string s,p;
        cin >> s;
        p=s;
        reverse(p.begin(),p.end());
        if(k==1){
          //  cout << "incicator if: " << k << endl;
            if(s==p){ cnt[s]=1; v.push_back("N");}
            else v.push_back(s);
        }
        else{
          //  cout << "incicator else: " << k <<"   " <<v.size()<<endl;
        for(ll i=0; i<v.size(); i++){
               // cout <<"v[i]: " <<v[i] << " i: " <<i <<"\tv.size():" <<v.size()<<endl;
            if(v[i]==p){
                    //cout << "v[i]==p"<<endl;
                    f.push_back(s);
                    r.push_back(p);
                    v[i]="N";
                    break;
            }
            }
            if(s==p) {
                if(cnt.find(s)!=cnt.end()) cnt[s]++;
                else cnt[s]=1;
            }
            else {v.push_back(s);}
        }
    }
    if(f.size()==0 && r.size()==0) cout << "0\n\n";
    else{
            string ms="";
        ll mx=0;
        for(auto it=cnt.begin(); it!=cnt.end(); it++){
            if(it->second > mx){mx=it->second; ms=it->first;}
        }

            cout << (f.size()+r.size())*l+ ms.size() <<endl;
        for(ll i=0; i<f.size(); i++) cout<<f[i];
        cout <<ms;
        for(ll i=r.size()-1; i>=0; i--) cout << r[i];
        cout << endl;
    }
    return 0;
}

