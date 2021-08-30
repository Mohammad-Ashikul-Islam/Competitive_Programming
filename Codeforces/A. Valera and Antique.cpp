#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long budget,n,c;
    cin >> n >> budget;
    vector<long long> v;
    for(long long i=0; i<n; i++ ){
        cin >> c;
        bool flag=0;
        for(long long j=0; j<c; j++){
            long long x;
            cin >> x;
            if(budget > x && flag==0){flag=1; v.push_back(i+1);}
        }
    }
    if(v.empty()==true) cout << "0\n";
    else {
            cout << v.size() << endl <<v[0];
        for(long long i=1; i<v.size(); i++) cout << " " << v[i];
        cout << endl;
    }

    return 0;
}
