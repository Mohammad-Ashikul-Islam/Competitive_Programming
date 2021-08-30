#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b;
    cin>>n >> a >>b;
    if(a+b+1<n) a+=n-(a+b+1);
    cout << n-a << endl;
    return 0;
}
