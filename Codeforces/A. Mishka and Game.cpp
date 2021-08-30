#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,p1=0,p2=0,a,b;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a >> b;
        if(a>b) p1++;
        else if(a<b) p2++;
    }
    if(p1==p2) cout << "Friendship is magic!^^\n";
    else if(p1>p2) cout << "Mishka\n";
    else cout << "Chris\n";
    return 0;
}

