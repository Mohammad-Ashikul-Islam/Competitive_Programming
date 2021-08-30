#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <long long> v;
    long long x,y,i,j,sum=0;
    cin >> x >> y;
    for(i=0; i<y; i++){ cin >>  j; v.push_back(j); }
    sum = v[0]-1;
    for(j=1; j<v.size(); j++){
        if(v[j]>=v[j-1]) sum += (v[j]-v[j-1]);
    else
        sum += ((x-v[j-1])+v[j]);
    }
    cout << sum << endl;
    return 0;
}
