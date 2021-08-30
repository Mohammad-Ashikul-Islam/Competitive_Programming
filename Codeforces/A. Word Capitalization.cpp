#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j;
    string s;
    cin >> s;
    char ch=toupper(s[0]);
    cout << ch;
    for(i=1; i<s.size(); i++){
        cout << s[i];
    }
    return 0;
}
