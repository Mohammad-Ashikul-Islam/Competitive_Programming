#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long u,t=75,n;
    for(u=1; u<=t; u++){
        cin >> n;
        if(n==0) break;
        long long bt=0,gt=0,p;
        while(n--){
            cin >>p;
            if(p==0) gt++;
            else bt++;
        }
        cout << "Case "<< u << ": "<< bt-gt<<endl;
    }
    return 0;
}
