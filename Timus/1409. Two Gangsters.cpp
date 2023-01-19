#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a,b;
    cin >> a >> b;
    ll cans = a+b-1;
    cout << cans-a << " " << cans-b << endl;
    return 0;
}

