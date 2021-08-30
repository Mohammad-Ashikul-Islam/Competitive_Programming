#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin >> n;
    char s[n];
    for(i=0; i<n; i++){
        s[i]='*';
        if(i==(n/2)) s[i]='D';
    }
    s[i]='\0';
    printf("%s\n",s);
    long long m=(n/2),p=(n/2);
    for(i=1; i<=n/2; i++){
        m++; p--;
        s[m]='D'; s[p]='D';
        printf("%s\n",s);
    }

     m=-1; p=n;
    for(i=1; m!=p; i++){
        m++; p--;
        if(m==p) break;
        s[m]='*'; s[p]='*';
        printf("%s\n",s);
    }
    return 0;
}
