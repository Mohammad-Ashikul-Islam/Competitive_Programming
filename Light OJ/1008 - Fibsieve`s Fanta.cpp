#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,s,u=0,i,j;
    long long ara[5][5]={{1,2,9,10,25},{4,3,8,11,24},{5,6,7,12,23},{16,15,14,13,22},{17,18,19,20,21} };
    cin >> t;
    for(u=1; u<=t; u++){
        cin >> s;
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                if(ara[i][j]==s) break;
            }
        }
        printf("Case %lld: %lld %lld\n",u,i+1,j+1);
    }
    return 0;
}
