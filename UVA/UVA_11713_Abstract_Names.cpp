#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000],p[10000];
    long long i,t;
    cin >> t;
    getchar();
    while(t--){
        cin.getline(s,10000);
        cin.getline(p,10000);
        long long k = 0;
        if(strlen(s) > strlen(p) || strlen(s) < strlen(p)) k=1;
        else {
        for(i=0; i<strlen(s); i++){
            if((s[i]=='a' || s[i]=='e' || s[i] =='i' || s[i]=='o' || s[i]=='u') && (p[i]=='a' || p[i] =='e' || p[i]=='i' || p[i]=='o' || p[i]=='u'))
                continue;
            else if(s[i]==p[i]) continue;
            else {
                k=1; break;
            }
        }
        }
        if(k ==0) cout << "Yes\n";
        else if(k==1) cout << "No\n";
    }
    return 0;
}
