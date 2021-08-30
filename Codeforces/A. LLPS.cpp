#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char m=s[0];
    for(long long i=0; i<s.size(); i++) m = max(m,s[i]);
    long long c=count(s.begin(),s.end(),m);
    for(long long i=0; i<c; i++) cout << (char) m;
    cout << endl;
    return 0;
}
