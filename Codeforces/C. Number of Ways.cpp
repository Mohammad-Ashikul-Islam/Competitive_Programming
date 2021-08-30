#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,start,end) for(i=start; i<end; i++)
int main()
{
    ll n,i;
    cin >> n;
    ll ara[n],ts=0;
    loop(i,0,n) cin >> ara[i],ts+=ara[i];
    if(ts%3==0){
        ll p1=0,total_combination=0,sum=0;
        loop(i,0,n-1){
            sum+=ara[i];
            if(sum==((ts/3)*2)) total_combination+=p1;
            if(sum==ts/3) p1++;
           // cout << sum << p1 << total_combination << endl;
        }
        cout <<total_combination << endl;
    }
    else cout << 0 << endl;
    return 0;
}
