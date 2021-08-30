#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    while(cin >>s){
            long long n;
            stringstream(s) >> n;
        if(n==0) break;
        long long sum=0,ns=0,i,ms;
        for(i=0; i<strlen(s); i++){
            sum += s[i]-48;
        }
        ms = sum;
    while(ms >= 10){
            while(sum!=0){
                ns += sum%10;
                sum = sum/10;
            }
            sum = ns;
            ms = ns;
            ns = 0;
    }
    cout << ms << endl;
    }
    return 0;
}
