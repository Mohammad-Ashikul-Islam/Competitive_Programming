#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,f1=0,f2=0,d=0;
    cin >> a >> b;
    for(int i=1; i<=6; i++){
        if(abs(i-a)==abs(i-b)) d++;
        else if(abs(i-a)<abs(i-b)) f1++;
        else f2++;
    }
    cout << f1 << " "<<d << " " << f2 << endl;
    return 0;
}
