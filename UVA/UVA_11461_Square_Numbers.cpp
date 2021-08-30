#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t=201,a,b,i;
    while(t--){
        cin >> a >>b;
        if(a==0 && b==0) break;
        long long count =0;
        double temp;
        for(i=a; i<=b; i++){
            temp = sqrt(i);
            if(temp - ((int)temp) == 0) count++;
        }
        cout << count <<endl;
    }
    return 0;
}
