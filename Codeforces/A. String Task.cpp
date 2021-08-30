#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    char ch = '.';
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(s[i]== 'A' || s[i]== 'E' || s[i]== 'I' || s[i]== 'O' || s[i]== 'U' || s[i]=='y' || s[i]=='Y' || s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u')
        continue;
        else if(s[i] >= 'A' && s[i]<='Z'){
            p.push_back(ch); p.push_back(tolower(s[i]));
        }
        else if(s[i]>='a' && s[i]<='z') { p.push_back(ch); p.push_back(tolower(s[i])); }
    }
    cout << p << endl;
    return 0;
}
