#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long n,m,z,c=0;
    cin >> n >> m >> z;
    for(ll i=n; i<=z; i+=n){
        if(i%m==0) c++;
    }
    cout << c << endl;
    return 0;
}
