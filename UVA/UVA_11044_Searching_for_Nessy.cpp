#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        long long x = ceil((n-2)/3.00) * ceil((m-2)/3.00);
       cout << x << endl;
    }
    return 0;
}
