#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,m,n;
    cin >> t;
    while(t--){
            cin >> m >> n;
            if(m==n) cout << "n is equal m: " << n << endl;
            else if(m>n) cout << m <<" is greater than "<<n << endl;
            else cout << m << " is smaller than " << n << endl;
    }
    return 0;
}
