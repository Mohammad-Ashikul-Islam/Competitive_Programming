#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define ss scanf
int main()
{
    ll n,i,sum1=0,sum2=0;
    cin >> n;
    vector<ll> a(n),b(n);
    loop(i,0,n) cin>>a[i];
    loop(i,0,n) cin >> b[i];
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end(),greater<ll>());
    ll ind1=0, ind2=0;
    char ch='a';
    while(ind1<n || ind2<n){
        if(ind1>=n){
            if(ch=='a')ind2++,ch='b';
            else sum2+=b[ind2],ind2++,ch='a';
        }
        else if(ind2>=n){
            if(ch=='a') sum1+=a[ind1],ind1++,ch='b';
            else ind1++,ch='a';
        }
        else{
            if(ch=='a'){
                if(a[ind1]>=b[ind2]) sum1+=a[ind1],ind1++,ch='b';
                else ind2++,ch='b';
            }
            else{
                if(b[ind2]>=a[ind1]) sum2+=b[ind2],ind2++,ch='a';
                else ind1++,ch='a';
            }
        }
    }
    cout << sum1-sum2 <<endl;
    return 0;
}
