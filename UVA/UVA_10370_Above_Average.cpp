#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t=0,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long ara[n],sum = 0,i;
        for(i=0; i<n; i++){cin >> ara[i]; sum += ara[i]; }
        long long count=0,average = sum/n;
        for(i=0; i<n; i++){
            if(ara[i]> average) count++;
        }
        double ans = (count*100.00)/n;
        printf("%.3lf",ans);
        cout << "%"<<endl;
    }
    return 0;
}
