#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    long long x,y,sum,i;
    while(t--){
    sum = 0;
    cin >> x >> y;
            for(i=x; i<=y; i++){
                    sum += (i*i);
            }
            cout << sum << endl;
    }
    return 0;
}
