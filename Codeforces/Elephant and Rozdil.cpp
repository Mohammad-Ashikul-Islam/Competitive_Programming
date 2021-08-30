#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    long ara[n];
 //   set<long> st;
    for(int i=0; i<n; i++){cin >> ara[i];}
    long min_count=1,min_index=0;
    for(int i=1; i<n; i++){
        if(ara[i]==ara[min_index]) { min_count++; continue; }
        if(ara[i]<ara[min_index]){min_index=i; min_count=1;}
    }
    if(min_count>1) cout << "Still Rozdil\n";
    else cout << min_index+1 << endl;
    return 0;
}
