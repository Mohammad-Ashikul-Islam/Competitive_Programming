#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long n,x,temp;
    cin >> x >> n >> s;
    if(count(s.begin(),s.begin()+n,'B')==0) cout << s << endl;
    else{
        for(long  long i=0; i<s.size(); i++){
        if(s[i]=='B') { temp = i; break; }
        }
        s[temp] = 'G';
        s[n] = 'B';
        cout << s << endl;
    }

    return 0;
}
