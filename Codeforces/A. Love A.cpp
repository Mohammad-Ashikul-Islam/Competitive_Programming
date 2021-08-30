#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long a,o,l;
    cin >> s;
    l=s.size();
    a = count(s.begin(),s.end(),'a');
    if(a>l/2) cout << l << endl;
    else cout << a+(a-1) << endl;
    return 0;
}
