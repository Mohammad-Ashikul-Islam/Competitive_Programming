#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
int valid(ll i,ll j,ll r,ll c)
{
    if((i>=1 && i<=r) && (j>=1 && j<=c)) return 1;
    return 0;
}
ll fnc(ll i,ll j,ll r,ll c)
{
    ll cnt=0;
    cnt += valid(i-1,j,r,c);
    cnt += valid(i+1,j,r,c);
    cnt += valid(i,j-1,r,c);
    cnt += valid(i,j+1,r,c);
    return cnt;
}
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll r,c;
        bool b=true;
        cin >> r >> c;
        ll ara[r+1][c+1],ans[r+1][c+1],i,j;
        for(i=1; i<=r; i++){
            for(j=1; j<=c; j++){
                cin >> ara[i][j];
                ans[i][j]=fnc(i,j,r,c);
            }
        }
       for(i=1; i<=r; i++){
            for(j=1; j<=c; j++){
                if(ara[i][j]>ans[i][j]) b=false;
            }
        }
        if(b==false) cout << "NO\n";
        else{
            cout << "YES\n";
            for(i=1; i<=r; i++){
            for(j=1; j<=c; j++){
                if(j==1){cout << ans[i][j];}
                else cout << " "<<ans[i][j];
            }
            cout << endl;
        }
        }
    }
    return 0;
}

