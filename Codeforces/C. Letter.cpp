#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(long long index=start; index<limit; index++)
int main()
{
    string s;
    cin >> s;
    ll n=s.size(),i,j;
    ll displaced_left[n],displaced_right[n],minimum=INT_MAX;
    for(i=0,j=s.size()-1; i<n; i++,j--){
        if(i==0){ displaced_left[i]=0,displaced_right[j]=0; continue; }
        if(s[i-1]>='a' && s[i-1]<='z') displaced_left[i]=displaced_left[i-1]+1;
        else displaced_left[i]=displaced_left[i-1];
        if(s[j+1]>='A' && s[j+1]<='Z') displaced_right[j]=1+displaced_right[j+1];
        else displaced_right[j]=displaced_right[j+1];
    }
    for(i=0; i<n; i++) minimum=min(minimum,displaced_left[i]+displaced_right[i]);
    cout << minimum << endl;
    return 0;
}
