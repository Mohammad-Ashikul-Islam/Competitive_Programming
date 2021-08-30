#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,x,sum[4]={0,0,0,0},mt,ind1=0,ind2=0,ind3=0;
    vector <long long> v;
    scanf("%lld",&t);
    for(i=0; i<t; i++){ scanf("%lld",&x); v.push_back(x);  sum[x]++; }
    mt = min(sum[1],min(sum[2],sum[3]));
    cout << mt << endl;
    for(i=0; i<mt; i++){
        while(v[ind1] != 1){ ind1++; }
        cout << ind1+1 << " ";
        ind1++;
        while(v[ind2] != 2){ ind2++; }
        cout << ind2+1 << " ";
        ind2++;
        while(v[ind3] != 3 ){ ind3++; }
        cout << ind3+1 << endl;
        ind3++;
    }
    return 0;
}

