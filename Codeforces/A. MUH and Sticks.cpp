#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ara[6];
    set<long long> st;
    map<long long,long long> m;
    for(int i=0; i<6; i++){
            cin>>ara[i];
            st.insert(ara[i]);
            if(m.find(ara[i])!=m.end()) m[ara[i]]++;
            else m[ara[i]]=1;
            }
    if(st.size()>3) cout << "Alien\n";
    else if(st.size()==1) cout << "Elephant\n";
    else if(st.size()==2){

        long long common,uncommon,v1,v2;
        for(auto it=m.begin(); it!=m.end(); it++){
            if(it->second==4 || it->second==5){ common=it->first; v1=it->second;}
            else if(it->second==2 || it->second==1) { uncommon=it->first; v2=it->second;}
            else { cout << "Alien\n"; return 0; }
        }
        if(v1==4 && v2==2) cout << "Elephant\n";
        else cout << "Bear\n";
    }
    else{
            int flag=0;
        for(auto it=m.begin(); it!=m.end(); it++){
            if(it->second==4){flag=1; break;}
        }
        if(flag==1) cout << "Bear\n";
        else cout << "Alien\n";
    }

    return 0;
}
