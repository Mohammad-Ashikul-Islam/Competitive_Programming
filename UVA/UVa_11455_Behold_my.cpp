#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--){
        vector<long long> v;
        long long x,k=0,i=4;
        while(i--){
            cin >> x;
            v.push_back(x);
            if(x==0) k=1;
        }
        if(k==1){cout << "banana\n"; continue;}
        sort(v.begin(),v.end());
        if(v[0]==v[1] && v[1]==v[2] && v[2]==v[3]) cout << "square\n";
        else if(v[0]==v[1] && v[2]==v[3]) cout << "rectangle\n";
        else if(v[0]+v[1]+v[2] > v[3]) cout << "quadrangle\n";
        else cout << "banana\n";
    }
    return 0;}
