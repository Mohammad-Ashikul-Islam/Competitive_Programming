#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    double m,n;
    while(t--){
            cin >> m >> n;
            if(n==0) cout << "denominator cannot be zero\n";
            else cout << m/n << endl;
    }
    return 0;
}
