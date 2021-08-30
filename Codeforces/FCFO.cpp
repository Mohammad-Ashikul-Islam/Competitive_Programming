#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fnc(ll ara[], ll n, ll frame)
{
    ll total_fall = 0,i;
	queue<ll> indexes;
	unordered_set<ll> s;
	for (i=0; i<n; i++)
	{
		if (s.size() < frame)
		{
			if (s.find(ara[i])==s.end())
			{
				s.insert(ara[i]);
				total_fall++;
				indexes.push(ara[i]);
			}
		}
		else
		{
			if (s.find(ara[i]) == s.end())
			{
				ll val = indexes.front();
				indexes.pop();
				s.erase(val);
				s.insert(ara[i]);
				indexes.push(ara[i]);
				total_fall++;
			}
		}
	}

	return total_fall;
}

int main()
{
    ll n=24,frame=4;
	ll ara[] = {1,3,2,4,5,6,2,3,8,7,4,5,6,2,3,9,2,9,6,7,5,2,3,4};
	printf("Total Page Fault = %lld\n",fnc(ara,n,frame));
	return 0;
}
