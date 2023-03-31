#include <iostream>
using namespace std;
#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >> n;
	    n = n*1000;
	    n /= 2;
	    cout << n/5 << endl;
	}
	return 0;
}
