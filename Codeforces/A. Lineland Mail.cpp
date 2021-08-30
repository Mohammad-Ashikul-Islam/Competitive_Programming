#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    ll n,i;
    cin >> n;
    ll ara[n];
    loop(i,0,n) cin >> ara[i];
    loop(i,0,n){
            if(i==0){
                cout << ara[i+1]-ara[i] << " " << ara[n-1]-ara[i] << endl;
                continue;
            }
            else if(i==n-1){
                cout << ara[n-1]-ara[n-2] << " " << ara[n-1]-ara[0] << endl;
                continue;
            }
            if(i+1<n && i-1>=0) cout << min(ara[i+1]-ara[i],ara[i]-ara[i-1]);
            else if(i+1>=n) cout << ara[i]-ara[i-1];
            else if(ara[i-1<0]) cout << ara[i+1]-ara[i];

            cout << " " <<max(ara[i]-ara[0],ara[n-1]-ara[i]) << endl;
            //cout << ara[i]-ara[0] <<  " ";
            //cout << ara[n-1]-ara[i] << endl;
    }
    return 0;
}

