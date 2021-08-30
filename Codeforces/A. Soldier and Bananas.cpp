#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,w,temp;
    cin >> k >> n >> w;
    temp = ((w*(w+1)*k)/2);
    temp = n-temp;
    if(temp>=0) cout << "0\n";
    else cout << temp*-1 << endl;
    return 0;
}



