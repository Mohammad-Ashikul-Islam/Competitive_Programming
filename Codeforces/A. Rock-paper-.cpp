#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fnc(string s,long long& rcount,long long& pcount, long long& scount)
{
    if(s=="rock") rcount++;
    else if(s=="paper") pcount++;
    else scount++;
}
void print(string s,string p,string q,string temp)
{
    if(s==temp) cout << "F\n";
    else if(p==temp) cout << "M\n";
    else cout << "S\n";
}
int main()
{
    string s,p,q;
    long long rcount=0,pcount=0,scount=0;
    cin >> s >> p >> q;
    if(s==p && p==q){cout << "?\n"; return 0;}
    fnc(s,rcount,pcount,scount);
    fnc(p,rcount,pcount,scount);
    fnc(q,rcount,pcount,scount);
    if(scount==1 && rcount ==1 && pcount==1){cout << "?\n"; return 0;}
    else if(scount==3 || rcount==3 || pcount==3){cout << "?\n"; return 0;}
    if(rcount==0){
        if(scount==2){cout << "?\n"; return 0;}
        print(s,p,q,"scissors");
    }
    else if(pcount==0){
        if(rcount==2){cout << "?\n"; return 0;}
        print(s,p,q,"rock");
    }
    else if(scount==0){
        if(pcount==2){cout << "?\n"; return 0;}
        print(s,p,q,"paper");
    }
    return 0;
}

