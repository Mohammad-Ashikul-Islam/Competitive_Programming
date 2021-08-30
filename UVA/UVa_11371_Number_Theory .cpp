#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin >> s){
        string p=s;
        sort(p.begin(),p.end(),greater<char>());
        sort(s.begin(),s.end());
        if(s[0]=='0'){
                int i;
            for(i=0; i<s.size(); i++){if(s[i]!='0') break;}
            s[0]=s[i]; s[i]='0';
        }
        long long x=atol(p.c_str()),y=atol(s.c_str());
        printf("%lld - %lld = %lld = 9 * %lld\n",x,y,x-y,(x-y)/9);
    }
    return 0;
}
