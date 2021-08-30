#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long i,j,ara[10];
        string s;
        for(i=1; i<=n; i++){
            if(i>9){
                j=i;
                while(j!=0){
                    s.push_back((j%10)+'0');
                    j = j/10;
                }
            }
            else s.push_back(i+'0');
        }
        for(i=0; i<9; i++) cout << count(s.begin(),s.end(),i+'0') << " ";
        cout << count(s.begin(),s.end(),9+'0') << endl;
    }
    return 0;
}
