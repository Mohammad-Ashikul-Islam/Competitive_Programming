#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if(n%2==1)cout << "NO\n";
    else if(n==2) cout << "NO\n";
    else{
        int x=2,temp=0;
        for(int i=x; i<=n; i+=2){
            if((n-i)>0 && (n-i)%2==0) { cout << "YES\n"; temp=1; break;}
        }
        if(temp==0) cout << "NO\n";
    }
    return 0;
    }
