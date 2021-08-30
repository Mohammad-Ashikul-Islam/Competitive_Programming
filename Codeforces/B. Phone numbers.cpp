#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    ll n,i,j;
    string s;
    cin >> n >> s;
    if(n%2==0){
        loop(i,0,n){
            if(i!=0) cout << "-";
            cout << s[i] << s[i+1];
            i++;
        }
        cout << endl;
    }
    else{
        loop(i,0,n-1){
            if(i!=0) cout << "-";
            cout << s[i] << s[i+1];
            i++;
        }
        cout << s[n-1] << endl;
    }
   // cout << endl;
    return 0;
}

