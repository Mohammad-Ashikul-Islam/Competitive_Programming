#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,y,z,i,s1=0,s2=0,s3=0;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> x >> y >> z;
        s1 += x; s2 += y; s3 += z;
    }
    if(s1==0 && s2==0 && s3==0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}




