#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,h,f,i,j,u=1;
    cin >> t;
    for(u=1; u<=t; u++){
        cin >> h >> f;
        long long p;
        for(p=1; p<=f; p++){
            for(i=1; i<=h; i++){
                for(j=1; j<=i; j++) cout << i;
                cout << endl;
            }
            for(i=h-1; i>=1; i--){
                for(j=1; j<=i; j++) cout << i;
                if(u==t && p==f && i==1) break;
                    cout << endl;
            }
            cout << endl;
        }
    }
    return 0;
}
