#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,n1=" not ",n2=" not",n3="not ";
    long long t;
    cin >> t;
    getchar();
    while(t--){
        getline(cin,s);
        int l=s.size();
        if(s=="not")cout << "Real Fancy\n";
        else if(strstr(s.c_str(),n1.c_str())) cout << "Real Fancy\n";
        else if(s.size()>3 && s[0]=='n' && s[1]=='o' && s[2]=='t' && s[3]==' ') cout << "Real Fancy\n";
        else if(s.size()>3 && s[l-1]=='t' && s[l-2]=='o' && s[l-3]=='n' && s[l-4]==' ') cout << "Real Fancy\n";
        else cout << "regularly fancy\n";
    }
    return 0;
}
