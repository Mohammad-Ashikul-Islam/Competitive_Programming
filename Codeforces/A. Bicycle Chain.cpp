#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,c=0,cmax=INT_MIN;
    cin >> n;
    long long a[n];
    for(i=0; i<n; i++) cin >> a[i];
    cin >> m;
    long long b[m];
    for(i=0; i<m; i++) cin >> b[i];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            double d=(b[j]*1.)/a[i];
            if(d-(long long)d==0.00 && (long long)d>=cmax){
                if((long long) d ==cmax) c++;
                else{
                    cmax=d; c=1;
                }
            }
        }
    }
    cout << c << endl;
    return 0;
}
