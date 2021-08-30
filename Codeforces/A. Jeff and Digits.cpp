#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    long ara[n],i,count_zero=0,count_five=0;
    for(i=0; i<n; i++){
            cin>> ara[i];
            if(ara[i]==0) count_zero++;
            else count_five++;
            }
    if(count_zero==0) cout << "-1\n";
    else{
    bool flag=false;
        while(count_five>0){
            if((5*count_five)%9==0){flag=true; break;}
            count_five--;
        }
        if(flag==false) cout << "0\n";
        else{
            for(i=0; i<count_five; i++) cout << 5;
            for(i=0; i<count_zero; i++) cout << 0;
            cout << endl;
        }
    }
    return 0;
}
