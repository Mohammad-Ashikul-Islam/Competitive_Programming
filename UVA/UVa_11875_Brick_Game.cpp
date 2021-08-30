#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,x,j;
	cin >> t;
	for(j=1; j<=t; j++){
        cin >> n;
        vector<long long> v;
        for(long long i=0; i<n; i++){
            cin >> x; v.push_back(x);
        }
        cout <<"Case "<<j<<": "<<v[n/2] << endl;
	}
	return 0;
}
