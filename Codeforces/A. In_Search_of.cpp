#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,temp,c=0;
    cin >> t;
    while(t--){
        cin >> temp;
        if(temp==1) c++;
    }
    if(c==0) cout << "EASY\n";
    else cout << "HARD\n";
    return 0;
}
