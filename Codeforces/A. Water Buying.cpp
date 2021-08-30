#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--){
            long long x,a,b;
        cin >> x >> a >> b;
        long long sum=0;
        if(x%2==1) {sum += a; x -=1;}
        long long y=b,z=2*a;
        if(z<=y) sum += (a*x);
        else sum += (b*(x/2));
        cout << sum;
        cout << endl;

    }
    return 0;
}
