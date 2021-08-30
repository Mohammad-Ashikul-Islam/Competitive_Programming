#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i=0,ara[1000],sum=0;
    cin >> n;
    for(i=0; i<n; i++){ cin >> ara[i]; sum += ara[i]; }
    long long temp = sum/2,c=-0,m=0;
    sort(ara,ara+n);
    reverse(ara,ara+n);
    i=0;
    while(m<=temp){
        c++;
        m += ara[i]; i++;
    }
    cout << c << endl;
    return 0;
}
