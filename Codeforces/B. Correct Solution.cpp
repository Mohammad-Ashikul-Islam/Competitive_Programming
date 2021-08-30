#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    string s,p;
    cin >> s >>p;
    if(p.length()>1 && p[0]=='0'){cout << "WRONG_ANSWER" <<endl; return 0;}
    sort(s.begin(),s.end());
    if(s[0]=='0' && s.size()==1) goto place;
    do{
            if(s[0]!='0') break;
    }while( next_permutation(s.begin(),s.end()));
    place: ;
    //ll x=atoll(s.c_str()),y=atol(p.c_str());
    //cout << s << endl << p << endl << endl;
    if(s==p) cout << "OK\n";
    else cout << "WRONG_ANSWER\n";
    return 0;
}
