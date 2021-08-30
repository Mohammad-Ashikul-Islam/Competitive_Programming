#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    string s;
    char ch;
    for(ll i=0; i<9; i++){
    cin >> ch;
    if(ch==' '){i--; continue; }
    s.push_back(ch);

    }
    string p=s;
    reverse(p.begin(),p.end());
    //cout << s << endl << p << endl;
    if(s==p) cout << "YES\n";
    else cout << "NO" << endl;
    return 0;
}
