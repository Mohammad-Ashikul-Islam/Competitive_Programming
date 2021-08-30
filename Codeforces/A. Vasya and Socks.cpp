#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,sum,j;
    cin >> x >> y;
    sum = x;
    for(j=y; j<=sum; j=j+y) sum++;
    cout << sum << endl;
    return 0;
}
