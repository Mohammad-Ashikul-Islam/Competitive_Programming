#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    set <char> st;
        for(int i=0; i<n; i++){
            st.insert(tolower(s[i]));
        }
        if(st.size()==26) cout << "YES\n";
        else cout << "NO\n";
    return 0;
}



