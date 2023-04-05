#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll a=2, b= 5, c=9;
    for(ll i=1; i<=20; i++){
        cout<< i << ":\t" << (a^i) << " " << (b^i) << " " << (c^i) << endl;
    }
    return 0;
}
