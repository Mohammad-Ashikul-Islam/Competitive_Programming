#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    ll n,i,j,sum=0;
    cin >> n;
    ll ara[n];
    loop(i,0,n) cin >> ara[i];
    sort(ara,ara+n);
    loop(i,0,n){
        if(i==0) continue;
        else if(ara[i]-ara[i-1]==1) continue;
        else{
                //cout << ara[i] << " " << ara[i-1] << endl;
            sum+=ara[i]-ara[i-1]-1;
        }
    }
    cout << sum << endl;
    return 0;
}
