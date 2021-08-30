#include<bits/stdc++.h>
using namespace std;
long long ara[55];
long long fnc(long long n)
{
    if(n==0) return 0;
    else if(n==1) return 2;
    else if(n==2) return 3;
        else{
                if(ara[n]!=0) return ara[n];
                ara[n] = fnc(n-1)+fnc(n-2);
                return ara[n];
        }
}
int main()
{
    long long t,i;
    cin >> t;
    for(i=1; i<=t; i++){
            long long n;
    cin >> n;
        long long x = fnc(n);
        printf("Scenario #%lld:\n%lld\n",i,x);
            cout << endl;
    }
    return 0;
}
