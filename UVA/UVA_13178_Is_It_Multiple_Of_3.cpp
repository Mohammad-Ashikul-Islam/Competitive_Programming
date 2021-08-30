#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long sum=n*(n+1)/2;
        if(sum%3==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
