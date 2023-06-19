#include<bits/stdc++.h>
using namespace std;

vector <long long> vec;

int isprime(long long n){
	if(n<2 || (!(n&1) && n!=2))
		return 0;
		for(long long i=3; i*i<=n; i+=2){
			if(!(n%i))
				return 0;
		}
	return 1;
}

void fnc()
{
	for(long long i=0; i<=1000000; i++)
		vec[i] = isprime(long long i);
}


int main()
{

	long long t,i,a,b,count;
	scanf("%lld",&t);
	fnc();
	while(t--){
		scanf("%lld %lld",&a,&b);
		count = 0;
		for(; a<=b; a++){
			if(vec[a]) count++;
		}
		printf("%lld\n",count);
	}
	return 0;
}
