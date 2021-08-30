#include<bits/stdc++.h>
#define ll long long
#define pb push_back


using namespace std;

int main(){

	//freopen("a.txt","r",stdin);
	ll t;
	cin>>t;
	while(t--){
		vector<ll> a,b;
		ll n;
		cin>>n;
		for(ll i=0;i<n;i++){
			ll x;
			cin>>x;
			a.pb(x);
		}
		for(ll i=0;i<n;i++){
			ll x;
			cin>>x;
			b.pb(x);
		}
		sort(a.begin(),a.end(),greater<long long>());
		sort(b.begin(),b.end(),greater<long long>());
		ll sum=0;
		for(ll i=0;i<n;i++)
			(a[i]<b[i])? sum+=a[i]: sum+=b[i];

		cout<<sum<<endl;
	}
	return 0;
}
