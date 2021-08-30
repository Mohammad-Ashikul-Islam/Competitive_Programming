#include<bits/stdc++.h>
using namespace std;
int main()
{
    long m,n,r;
    cin >> n >> m >> r;
    int mini=LONG_MAX;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        if(i==0) mini=x;
        else mini = min(mini,x);
    }
    int maxi=LONG_MIN;
    for(int i=0; i<m; i++){
        int x; cin >> x;
        if(i==0) maxi=x;
        else maxi = max(maxi,x);
    }
    long brought=(r/mini);
    long total = maxi*brought;
    total += (r%mini);
    if(total<=r) cout << r << endl;
    else cout << total; cout << endl;
    return 0;
}
