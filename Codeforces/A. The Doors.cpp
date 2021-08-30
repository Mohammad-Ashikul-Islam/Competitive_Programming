#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,one=0,zero=0;
    cin >> n;
    long long ara[n];
    for(long long i=0; i<n; i++){
        cin >> ara[i];
        if(ara[i]==0) zero++;
        else ++one;
    }
    long long c=0;
    for(long long i=0; i<n; i++){
        if(zero==0 || one==0) break;
        if(ara[i]==0) zero--;
        else one--;
        c++;
    }
    cout << c << endl;
    return 0;
}


