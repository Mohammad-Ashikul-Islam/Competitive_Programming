#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,p1,p2,p,k;
    cin >> t;
    while(t--){
        cin >> p1 >> p2 >> k;
        p = p1+p2+1;
        if(((p/k)%2==0) && ((p%k)!=0)) cout << "Chef\n";
        else if(((p/k)%2!=0) && ((p%k)==0))cout << "Chef\n";
        else if(((p/k)%2!=0) && ((p%k)!=0))cout << "Paja\n";
        else if(((p/k)%2==0) && ((p%k)==0))cout << "Paja\n";
    }
    return 0;
}
