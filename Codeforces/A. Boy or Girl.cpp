#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <char> temp;
    string s;
    getline(cin,s);
    for(long long i=0; i<s.size(); i++){
        temp.insert(s[i]);
    }
    if(temp.size() %2 ==0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
    return 0;
}

