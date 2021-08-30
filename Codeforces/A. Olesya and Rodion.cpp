#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,k=0,sum=1,i=1;
    cin >> a >> b;
    if(b==10 && a==1) cout << "-1\n";
    else if(b==10){
        for(i=1; i<a; i++) cout << "1";
        cout << "0" << endl;
    }
    else{
    for(i=0; i<a; i++) cout << b;
    cout << endl;
    }
    return 0;
}
