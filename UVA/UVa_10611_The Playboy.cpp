#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,i,x;
    cin >> n;
    vector<long> v;
    for(i=0; i<n; i++){ cin>>x; v.push_back(x);}
    cin >>x;
    for(i=1; i<=x; i++){
        long a,p,q;
        cin >> a;
        p=upper_bound(v.begin(),v.end(),a)-v.begin();
        while(p>=0 && v[p]>=a){p--;}
        if(p<0) p=-1;
        else if(v[p]<a) p=v[p];
        else p=-1;
        q=lower_bound(v.begin(),v.end(),a)-v.begin();
        while(q<v.size() && v[q]<=a){q++;}
        if(q>=v.size()) q=-1;
        else if(v[q]>a) q=v[q];
        else q=-1;
        if(p==-1) cout << "X ";
        else cout << p << " ";
        if(q==-1) cout << "X\n";
        else cout << q << endl;
    }
    return 0;
}
