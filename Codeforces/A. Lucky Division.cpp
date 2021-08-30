#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ara[]={4,7,47,74,444,474,477,747,774,777};
    long long n,i,temp=0;
    cin >> n;
    for(int i=0; i<10; i++){
            if(ara[i]==n) {temp=1; break;}
        if(n%ara[i]==0){temp=1; break; }
    }
    if(temp==1) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}






