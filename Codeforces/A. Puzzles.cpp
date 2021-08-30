#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <long long> v;
    v.push_back(0);
    long long x,y,i,r,m=0,temp;
    cin >> x >> y;
    for(i=1; i<=y; i++){cin >> r; v.push_back(r);}
    sort(v.begin()+1,v.end());
    for(i=1; i<=y-x+1; i++){
       // cout << v[i+x-1] << "-" << v[i] << " = ";
        temp = v[i+x-1]-v[i];
        if(i==1) m=temp;
        //cout << temp << endl;
        if(temp<m) m = temp;
    }
    cout << m << endl;
    return 0;
}

