#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--){
        string s;
        long long m,ch;
        scanf("%lld",&m);
        for(long long i=0; i<m; i++){
            scanf("%lld",&ch);
            s.push_back(ch+'0');
        }
        bool b=next_permutation(s.begin(),s.end());
        if(b==false) cout << "-1\n";
         else   cout << s<< endl;
    }
    return 0;
}
