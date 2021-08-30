#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,temp,x,i,sum=0,mx,mn;
    cin >> a;
    for(i=0; i<a; i++){
        cin >> x;
        if(i==0){ mx = x; mn=x; continue; }
        if(x > mx){ sum++; mx=x;}
        else if(x<mn){  sum++; mn=x;}
    }
    cout << sum << endl;
    return 0;
}

