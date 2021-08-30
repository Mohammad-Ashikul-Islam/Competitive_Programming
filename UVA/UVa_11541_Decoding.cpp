#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    for(long long u=1; u<=t; u++){
        string s;
        cin >> s;
        printf("Case %lld: ",u);
        for(long i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
            char ch=s[i];
            long x=0;
                i++;
            while( ((s[i]-'0')>=0) && (s[i]-'0'<=9) ){
                x=x*10;
                x += s[i]-'0';
                i++;
            }
            for(long j=1; j<=x; j++) cout << ch;
        }
        i--;
        }
        cout << endl;
    }
    return 0;
}
