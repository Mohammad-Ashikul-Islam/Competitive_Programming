#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,t,i,j;
    string s;
    cin >> n >> t >>s;
    for(j=0; j<t; j++){
    for(i=0; i<s.size()-1; i++)
    {
        if(s[i]=='B' && s[i+1]=='G'){
        s[i]='G'; s[i+1]='B'; i++;
        }
        }
    }
    cout << s << endl;
    return 0;
}
