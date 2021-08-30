#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long t;
    cin >>t;
    while(t--){
        string x;
        cin>>x;
        long long i,j=0,ind=0,start=-1,end=-1;
        for(i=0; i<x.size(); i++){
            for(; j<s.size(); j++){
                if(x[i]==s[j]){
                        ind++;
                        if(start==-1)  start=j;
                        if(ind==x.size()) end=j;
                        j++;
                        break;
                }
            }
        }
        if(start==-1 || end==-1) printf("Not matched\n");
        else printf("Matched %lld %lld\n",start,end);
    }
    return 0;
}
