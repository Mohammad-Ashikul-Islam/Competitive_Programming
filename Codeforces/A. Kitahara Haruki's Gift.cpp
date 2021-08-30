#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define ss scanf
#define ss scanf
int main()
{
    ll n,i,sum=0,hun=0,dhun=0;
    cin >> n;
    ll ara[n];
    loop(i,0,n){ cin>>ara[i]; sum+=ara[i];
    if(ara[i]==100) hun++;
    else dhun++;
    }
    if((sum/100)%2==1) {cout << "NO\n"; return 0;}
        dhun=dhun%2;
        if(dhun==1) hun-=2;
        if(hun<0) cout << "NO\n";
        else if(hun%2==1) cout << "NO\n";
        else cout << "YES\n";
    return 0;
}

