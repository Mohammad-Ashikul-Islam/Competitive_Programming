#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,c=0,temp=0,i;
    vector <long long> d;
    cin >> n;
    for(i=0; i<n; i++){ cin >> x; if(x==4){c++; continue;} d.push_back(x); }
    n = d.size();
    long long m1,m2,m3,res1,res2,res3;
    m3 = count(d.begin(),d.end(),3);
    m2 = count(d.begin(),d.end(),2);
    m1 = count(d.begin(),d.end(),1);
    c += m2/2;
    res2 = m2%2;
    if(m3>m1){        c += m1; c += m3-m1; if(res2==1) c++;    }
    else{
        c += m3;
        m1 -= m3;
        c += m1/4;
        m1 %= 4;
        res2 *= 2;
        if(m1+res2==0) ;
        else if(m1+res2<=4) c++;
        else  c+=2;
    }
    cout << c << endl;
    return 0;
}
