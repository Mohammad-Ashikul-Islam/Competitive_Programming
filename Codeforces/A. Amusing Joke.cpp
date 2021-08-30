#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,i,j,ind=0;
    set<int> st;
    string s1,s2,s3;
    set <char> st1,st2,st3;
    cin >> s1 >> s2 >> s3;
    string s=s1+s2;
    sort(s.begin(),s.end());
    sort(s3.begin(),s3.end());
    if(s3==s) cout <<"YES\n";
    else cout << "NO\n";
    return 0;
}





