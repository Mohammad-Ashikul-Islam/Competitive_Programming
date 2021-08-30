#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long u,t;
    cin >>t;
    for(u=1; u<=t; u++){
        long long ara[3],t1,t2,f,a,i,j,avrg,tm;
        char ch;
        cin >> t1 >> t2 >> f >> a >> ara[0] >> ara[1] >> ara[2];
        for(i=0; i<3; i++){
            for(j=0; j<3-i-1; j++){
                if(ara[j]<ara[j+1]){
                    avrg = ara[j]; ara[j]=ara[j+1]; ara[j+1]=avrg;
                }
            }
        }
            avrg = (ara[0]+ara[1])/2;
            tm = t1+t2+f+a+avrg;
            if(tm >= 90) ch = 'A';
            else if(tm >= 80) ch = 'B';
            else if(tm >= 70) ch = 'C';
            else if(tm >= 60) ch = 'D';
            else ch = 'F';
            cout << "Case "<<u<<": "<<ch<<endl;
    }
    return 0;
}
