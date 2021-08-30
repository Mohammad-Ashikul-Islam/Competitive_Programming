#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    long long x,y,n,i;
    while(t--){
    cin >> n >> x >> y;
            for(i=1; i<n; i++){
                    if(i%x==0 && i%y!=0) cout << i << " ";
            }
            cout << endl;
    }
    return 0;
}

