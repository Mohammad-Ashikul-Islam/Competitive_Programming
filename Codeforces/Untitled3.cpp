#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    string s;
    cin >> s;
    string p;
    ll i=0,n=s.size(),left=0,right=n-1;
    while( i+2<n && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        left=i+3;
        i = i+ 3;
    }
    i=n-1;
    while( i-2>=0 && s[i]=='B' && s[i-1]=='U' && s[i-2]=='W'){
        right=i-3;
        i = i-3;
    }
    for(i=left; i<=right; ){
        if(i+2<=right && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            p.push_back(' ');
            i+=3;
        }
        else{
            p.push_back(s[i]);
            i++;
        }
    }
    cout << p << endl;
    return 0;
}

