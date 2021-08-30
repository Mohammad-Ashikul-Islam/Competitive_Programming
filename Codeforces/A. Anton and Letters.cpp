#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long c=0,i;
    string s;
    set<char> st;
    getline(cin,s);
    for(i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i]<='z') st.insert(s[i]);
    }
    cout << st.size();
    return 0;
}






