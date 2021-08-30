#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long a,d;
    a = count(s.begin(),s.end(),'A');
    d = count(s.begin(),s.end(),'D');
    if(a>d) cout << "Anton\n";
    else if(a<d) cout << "Danik\n";
    else cout << "Friendship\n";
    return 0;
}



