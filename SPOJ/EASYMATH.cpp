#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[15],k=-1,e=-1;
ll fnc(ll n,ll m,ll p)
{
    ll temp1,temp2;
    temp1=((n/p)*p)+p;
    temp2=(m/p)*p;
    return (temp2-temp1)/p;
}
ll Di_Intersection(ll n,ll m,ll p,ll q)
{
    ll temp=__gcd(p,q);
    ara[++k]=temp;
    temp=fnc(n,m,temp);
    return temp;
}
ll Tri_Intersection(ll n,ll m,ll p,ll q,ll r)
{
    //static int e=-1;
    ll temp=ara[++e];
    temp=__gcd(temp,r);
    ara[++k]=temp;
    temp=fnc(n,m,temp);
    return temp;
}
ll Tetra_Intersection(ll n,ll m,ll p,ll q,ll r,ll s){
    ll temp=__gcd(ara[4],s);
    temp=fnc(n,m,temp);
    return temp;
}
int main()
{
    ll t,n,m,a,d;
    cin >> t;
    while(t--){
        k=-1,e=-1;
        cin >> n >> m >> a >> d;
        ll p=a,q=a+d,r=a+2*d,s=a+3*d;
        ll sum=0;
        sum=fnc(n,m,p)+fnc(n,m,q)+fnc(n,m,r)+fnc(n,m,s);
        sum= sum-Di_Intersection(n,m,p,q)-Di_Intersection(n,m,q,r)-Di_Intersection(n,m,r,s)-Di_Intersection(n,m,s,p);
        sum= sum+Tri_Intersection(n,m,p,q,r)+Tri_Intersection(n,m,q,r,s)+Tri_Intersection(n,m,r,s,p)+Tri_Intersection(n,m,s,p,q);
        sum=sum-Tetra_Intersection(n,m,p,q,r,s);
        cout << (m-n+1)-sum << endl;
    }
    return 0;
}
