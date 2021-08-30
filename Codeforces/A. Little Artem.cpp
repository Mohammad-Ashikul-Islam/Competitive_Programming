#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >>t;
    while(t--){
        long long m,n;
        cin  >> n>> m;
        bool flag=false;
        for(long long i=0; i<n; i++){
            for(long long j=0; j<m; j++){
            if(flag==false){
                cout << "W";
                flag=true;
                continue;
            }
            cout << "B";
                }
                cout << endl;
        }

    }
    return 0;
}
