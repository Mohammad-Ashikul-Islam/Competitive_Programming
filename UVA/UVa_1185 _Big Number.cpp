#include<bits/stdc++.h>
using namespace std;
long long fnc(long long n){
    if(n==0 || n==1) return 1;
    double sum=0;
    for(auto i=2; i<=n; i++)
        sum += log10(i);
    return (floor(sum)+1);
}
int main()
{
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long x=fnc(n);
        cout << x << endl;
    }
}
