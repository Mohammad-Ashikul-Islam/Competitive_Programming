#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,e,f,c;
    cin >> t;
    while(t--){
        cin >> e >> f >> c;
        long long sum=e+f,count=0;
        while(sum >= c){
            count += sum/c;
            sum = (sum%c)+(sum/c);
        }

        cout << count << endl;
    }
    return 0;
}
