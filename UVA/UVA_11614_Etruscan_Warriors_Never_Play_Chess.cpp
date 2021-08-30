#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << (long long) (sqrt(1+8*n)-1)/2 << endl;
    }
    return 0;
}
