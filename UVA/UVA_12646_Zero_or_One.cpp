#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    while(cin >> a >> b >>c){
        if(b==c && a!=b) cout << "A\n";
        else if(a==c && b!=a) cout << "B\n";
        else if(a==b && a!=c) cout << "C\n";
        else cout << "*\n";
    }
    return 0;
}
