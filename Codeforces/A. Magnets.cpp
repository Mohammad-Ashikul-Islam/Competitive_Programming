#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,p,c=0;
    cin >> n;
    for(long long i=0; i<n; i++){
        cin >> x;
        if(i==0){c++; p=x; continue;}
        if(p==x) continue;
        p = x;
        c++;
    }
    cout << c << endl;
    return 0;
}



