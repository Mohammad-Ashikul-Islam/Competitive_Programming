#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,t,f,j,i,m=INT_MIN;
    cin >> n >> k;
    for(i=0; i<n; i++){
        cin >> f >> t;
        if(t>k) j=f-(t-k);
        else j=f;
        if(m<j) m=j;
    }
    cout << m << endl;
    return 0;
}

