#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n < 0) cout << "invalid\n";
        else cout << sqrt(n) << endl;
    }
    return 0;
}
