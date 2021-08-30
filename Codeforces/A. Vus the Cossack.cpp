#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,k,m,c;
    cin >> n >> m >> k;
    c=min(m,k);
    if(c<n) cout << "No\n";
    else cout << "Yes\n";
    return 0;
}

