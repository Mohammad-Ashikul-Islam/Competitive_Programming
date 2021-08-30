#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    string s;
    cin >> ch >> s;
    string p="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(ch=='R'){
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<p.size(); j++){
                if(s[i]==p[j]) cout << p[j-1];
            }
        }
    }
    else if(ch=='L'){
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<p.size(); j++){
                if(s[i]==p[j]) cout << p[j+1];
            }
        }
    }
    return 0;
}
