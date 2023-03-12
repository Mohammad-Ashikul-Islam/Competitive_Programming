#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    for(ll i=0; i<s.size(); i++){
        if(i%2==1) continue;
        char temp = s[i];
        s[i]=s[i+1];
        s[i+1]=temp;
    }
    cout << s << endl;
    return 0;
}
