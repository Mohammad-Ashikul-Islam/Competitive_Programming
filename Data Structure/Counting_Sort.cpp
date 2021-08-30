#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,u,n,x;
    cout << "Give array size & upper limit: \n";
    cin >> n >> u;
    int ara[n];
    int cnt[u+1];
    memset(cnt, 0, sizeof(cnt));
    for(i=0; i<n; i++) cin >> ara[i];
    for(i=0; i<n; i++){
    int x = ara[i];
    cnt[x]++;
    }
    //Now Everything is counted in time limit O(m+n)
    for(i=0; i<u+1; i++)
    cout << i << ":  " << cnt[i] << "\ttimes\n";
    //We can also make sort using this algorithm
    int in=0;
    for(i=0; i<u+1; i++){
        int p=cnt[i];
        while(p--) {
        ara[in] = i;
        in++;
        }
    }
    cout << endl << endl;
    for(i=0; i<n; i++) cout << ara[i] << " ";
    return 0;
}
