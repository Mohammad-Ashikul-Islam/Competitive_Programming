#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    ll n;
    cin >> n;
    ll ara[n],i,j,k,c=0;
    loop(i,0,n) cin >> ara[i];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(j==i) continue;
            for(k=0; k<n; k++){
                if(k==i || k==j) continue;
                ll mx=max({ara[i],ara[j],ara[k]}),sum=ara[i]+ara[j]+ara[k];
                if(sum-mx==mx){
                    if(ara[i]>=ara[j] && ara[i]>=ara[k]){
                        cout << i+1;
                        if(ara[j]>=ara[k]) cout << " " << j+1<< " " << k+1 << endl;
                        else cout << " " << k+1 << " " << j+1 << endl;
                     }
                    else if(ara[j]>=ara[i] && ara[j]>=ara[k]){
                        cout << j+1;
                        if(ara[i]>=ara[k]) cout << " " << i+1<< " " << k+1 << endl;
                        else cout << " " << k+1 << " " << i+1 << endl;
                     }
                    else{
                        cout << k+1;
                        if(ara[j]>=ara[i]) cout << " " << j+1<< " " << i+1 << endl;
                        else cout << " " << i+1 << " " << j+1 << endl;
                     }
                     return 0;
                }
   //                 {
//cout << max({i+1,j+1,k+1}) << " " <<(i+j+k+3)-max({i+1,j+1,k+1})-min({i+1,j+1,k+1}) << " " << min({i+1,j+1,k+1}) <<endl; return 0;
//}
            }
        }
    }
    cout << "-1\n";
    return 0;
}
