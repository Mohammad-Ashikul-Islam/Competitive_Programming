#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    while(cin >> s){
        if(s[0]-48 == 0) break;
        long long int i,j=1,sum =0;
        for(i=strlen(s)-1; i>=0; i--){
            sum += (s[i]-48)*(pow(2,j)-1);
            j++;
        }
        cout << sum << endl;
    }
    return 0;
}
