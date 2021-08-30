#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,max_carry;
    cin >> n >> max_carry;
    long i,ara[n],sum=0;
    for(i=0; i<n; i++) cin >> ara[i];
    sort(ara,ara+n);
    int ans=0;
    for(i=0; i<n; i++){
        if(ans+ara[i]<ans && max_carry>0){ans += ara[i]; max_carry--;}
    }
    if(ans<=0) cout << ans*-1 << endl;
    else cout << ans*1 << endl;
    return 0;
}
