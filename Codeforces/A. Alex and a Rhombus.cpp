#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b=0,sum=1,i=0;
    cin >> a;
    for(i=1; i<=a; i++){
        sum += (4*b); b++;
    }
    cout << sum << endl;
    return 0;
}

