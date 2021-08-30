#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n;
    cin >> t;
    while(t--){
            cin >> n;
            if(n==0) cout << "n is zero\n";
            else if(n < 0) cout << n << " is negative number\n";
            else cout << n <<" is positive number ";
    }
    return 0;
}
