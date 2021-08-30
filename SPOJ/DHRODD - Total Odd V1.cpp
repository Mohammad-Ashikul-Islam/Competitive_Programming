#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,sum=0;
    cin >> m >> n;
    for(; m<=n; m++){
            if(m%2==1) sum++;
    }
    cout << sum << endl;
    return 0;
}
