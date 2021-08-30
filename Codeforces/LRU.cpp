#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fnc(ll ara[], ll n, ll frame)
{
	ll total_falls = 0,i;
	unordered_map<ll, ll> indexes;
	unordered_set<ll> s;
	for (i=0; i<n; i++)
	{
		if (s.size() < frame)
		{
			if (s.find(ara[i])==s.end())
			{
				s.insert(ara[i]);
				total_falls++;
			}
			indexes[ara[i]] = i;
		}
		{
			if (s.find(ara[i]) == s.end())
			{
				ll lru = INT_MAX, val;
				for (auto it=s.begin(); it!=s.end(); it++)
				{
					if (indexes[*it] < lru)
					{
						lru = indexes[*it];
						val = *it;
					}
				}
				s.erase(val);
				s.insert(ara[i]);
				total_falls++;
			}
			indexes[ara[i]] = i;
		}
	}
	return total_falls;
}

int main()
{
    ll n = 26,frame = 3;
	ll ara[] = {1,3,2,2,2,4,5,6,2,3,8,7,4,5,6,2,3,9,2,9,6,7,5,2,3,4};
	printf("Total Page Fault = %lld\n",fnc(ara,n,frame));
	return 0;
}
