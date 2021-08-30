#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    string s="ROYGBIV",s1="ROYG",s2="BIV";
    cin >> n;
    if(n<=7){
        for(int i=0; i<n; i++) cout << s[i];
    }
    else{
            for(int i=0,ind=0; i<=n-4; i++,ind++){
                if(ind>3) ind=0;
                cout << s1[ind];
            }
            cout << s2;
    }
    cout << endl;
    return 0;
}
