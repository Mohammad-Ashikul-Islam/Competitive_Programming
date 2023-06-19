#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    while(cin >> s){
        ll b=s.size()-1,f=0,sum=0;
        while(b>f){
            if(s[f] != s[b]){
                if(s[b]<s[f]) sum += s[f]-s[b];
                else sum += (26-(s[b]-s[f]));
            }
            f++; b--;
        }
        cout << sum << endl;
    }
    return 0;
}
