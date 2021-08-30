#include <bits/stdc++.h>
using namespace std;

long long lowerIndex(vector<long long> &arr, long long n, long long x)
{
    long l = 0, h = n - 1,flag=0;
    while (l <= h) {
        long long mid = (l + h) / 2;
        if(arr[mid]==x) return mid;
        else if (arr[mid] > x)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return l;
}

long long upperIndex(vector <long long> &arr, long long n, long long y)
{
    long long l = 0, h = n - 1,flag=0;
    while (l <= h) {
        long long mid = (l + h) / 2;
        if(arr[mid]==y) return mid;
        else if (arr[mid] < y)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return h;
}

long long countInRange(vector<long long> &arr, long long n, long long x, long long y)
{
    long long count = 0;
    count = upperIndex(arr, n, y) - lowerIndex(arr, n, x) + 1;
    return count;
}


int main() {
	long long t,n,q,u;
	scanf("%lld",&t);
	for(u=1; u<=t; u++){
            printf("Case %lld:\n",u);
		scanf("%lld %lld",&n,&q);
		vector<long long> v;
		for(long long j=0; j<n; j++){
                long long x;
                scanf("%lld",&x);
                v.push_back(x);
		}
		for(long long j=0; j<q; j++){
		    long long x,y;
            scanf("%lld %lld",&x,&y);
            printf("%lld\n",countInRange(v,n,x,y));
		}
	}
	return 0;
}
