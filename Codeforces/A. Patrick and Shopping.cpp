#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    ll ara[3];
    cin >> ara[0] >> ara[1] >> ara[2];
    ll a=ara[0]+ara[1]+ara[2];
    ll b=ara[0]+ara[2]+ara[2]+ara[0];
    ll c=ara[1]+ara[1]+ara[0]+ara[0];
    ll d=ara[1]+ara[2]+ara[2]+ara[1];
    cout << min({a,b,c,d}) << endl;
    return 0;
}
