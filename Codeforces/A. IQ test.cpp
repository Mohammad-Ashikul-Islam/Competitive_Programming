#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,x,ce=0,co=0,ice,ico;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        if(x%2==0) {ce++; ice=i+1;}
        else {co++; ico=i+1;}
    }
    if(ce==1) cout << ice << endl;
    else cout << ico << endl;
    return 0;
}




