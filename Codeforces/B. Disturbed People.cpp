#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n,temp,sum=0;
    vector <int> v;
    cin >> n;
    for(i=0; i<n; i++){cin >>t; v.push_back(t); }
    for(i=1; i<n-1; i++){
        if(v[i-1]==1 && v[i]==0 && v[i+1]==1){v[i+1]=0; sum++;}
    }
    cout << sum << endl;
    return 0;
}

