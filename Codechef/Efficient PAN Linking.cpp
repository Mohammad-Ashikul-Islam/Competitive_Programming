#include<bits/stdc++.h>
using namespace std;

#define ll long long

// Function to calculate the modulus
ll modBigNumber(string num, ll m)
{
    // Store the modulus of big number
    vector<int> vec;
    ll mod = 0;

    // Do step by step division
    for (int i = 0; i < num.size(); i++) {

        int digit = num[i] - '0';

        // Update modulo by concatenating
        // current digit.
        mod = mod * 10 + digit;

        // Update quotient
        int quo = mod / m;
        vec.push_back(quo);

        // Update mod for next iteration.
        mod = mod % m;
    }

    return (long long) mod;
}


int main()
{
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << modBigNumber(s,20) << endl;
    }
    return 0;
}
