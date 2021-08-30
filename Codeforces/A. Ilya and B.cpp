#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long l=s.size()-1,i,j,k;
    char m[l],n[l];
    if(s[0]!='-'){cout << s << endl; return 0;}
    for(i=0,j=0,k=0; i<=l; i++){
        if(i!=l){m[j]=s[i]; j++;} ;
        if(i!=l-1){n[k]=s[i]; k++;}
    }
    m[j]='\0'; n[k]='\0';
    long p=atol(m),q=atol(n);
    cout << max(p,q) << endl;
    return 0;
}
