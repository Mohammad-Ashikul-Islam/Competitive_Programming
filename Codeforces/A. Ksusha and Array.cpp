#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,minimum=INT_MAX,i;
    cin >> n;
    long long ara[n];
    for(i=0; i<n; i++) cin >> ara[i];
    for(i=0; i<n; i++){
        if(ara[i]<minimum) minimum=ara[i];
    }
    for(i=0; i<n; i++){
        if(ara[i]%minimum !=0){cout << "-1\n"; return 0;}
    }
    cout << minimum << endl;
    return 0;
}
