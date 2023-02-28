#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<pair<int,int>> st;
    st.insert(make_pair(0,0));
    int i,x=0,y=0;
    bool flag=false;
    for(i=0; i<s.size(); i++){
        if(s[i]=='U')y++;
		if(s[i]=='D')y--;
		if(s[i]=='R')x++;
		if(s[i]=='L')x--;
		if(st.find(make_pair(x,y)) != st.end()) flag=true;
		else st.insert((make_pair(x,y)));
    }
    if(flag==false) cout << "No\n";
    else cout << "Yes\n";
    return 0;
}
