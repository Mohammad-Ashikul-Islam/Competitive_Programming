#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long h1,m1,h2,m2;
    while(cin >> h1 >> m1 >> h2 >> m2){
        if(h1==0 && m1==0 && h2==0 && m2==0) break;
        long long dh, dm, td;
        if(h1==h2 && m2<m1){
            dm = m2+60-m1;
            dh = 23;
        }
        else if(m1>=m2){
                dm = m2-m1;
        if(h2 > h1) dh = h2-h1;
        else dh = h2+24-h1;
        }
        else {
            dm = m2+60-m1;
            if(h2>=h1) dh = h2-h1-1;
            else dh = h2+24-h1-1;
        }
        td = (dh*60)+dm;
        cout << td << endl;
    }
    return 0;
}
