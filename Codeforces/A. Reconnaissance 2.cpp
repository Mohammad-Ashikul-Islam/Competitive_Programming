#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    long ara[n],i,x,d[n];
    for(i=0; i<n; i++){
        cin >> ara[i];
        if(i==0) continue;
        d[i-1]=abs(ara[i]-ara[i-1]);
    }
    d[n-1]=abs(ara[n-1]-ara[0]);
    long long min_index=0;
    for(i=0; i<n; i++){
        if(d[i]<d[min_index]) min_index=i;
    }
    if(min_index==n-1) cout << n << " " << 1 << endl;
    else cout << min_index+1 << " " << min_index+2 << endl;
    return 0;
}
