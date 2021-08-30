#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,x;
    cin >> n;
    string s="I hate that",p="I love that";
    if(n==1) cout << "I hate it\n";
    else if(n==2) cout << "I hate that I love it\n";
    else{
        for(i=1; i<=n-1; i++){
            if(i%2==1) cout << s << " ";
            else cout << p << " ";
        }
        if(i%2==1) cout << "I hate it\n";
        else cout << "I love it\n";
    }
    return 0;
}

