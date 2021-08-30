#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long t,i=0,k=0;
    cin >> t;
    cin >> s;
    for(; i<t-1; i++){
        if(s[i]>s[i+1]){ s.erase(s.begin()+i); k=1; break; }
    }
    if(k==0) s.erase(s.begin()+t-1);
    cout << s << endl;
    return 0;
}
