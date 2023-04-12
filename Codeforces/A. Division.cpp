#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n<=1399) cout << "Division 4\n";
        else if(n<=1599)  cout << "Division 3\n";
        else if(n<=1899)  cout << "Division 2\n";
        else  cout << "Division 1\n";
    }
    return 0;
}
