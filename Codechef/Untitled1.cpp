#include<bits/stdc++.h>
using namespace std;
int main()
{

    long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long ara[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++ ) cin >> ara[i][j];
        }
        bool flag = true;
        for(int i=0; i<n; i++){
        bool b=true;
            for(int j=0; j<n; j++ ){
                if(ara[i][j]==0) b=false;
            }
            if(b==true) flag = false;
        }
        for(int i=0; i<n; i++){
        bool b=true;
            for(int j=0; j<n; j++ ){
                if(ara[j][i]==0) b=false;
            }
            if(b==true) flag = false;
        }
        if(flag==true) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
