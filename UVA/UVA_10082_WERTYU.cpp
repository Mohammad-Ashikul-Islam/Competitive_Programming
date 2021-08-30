#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000],p[10000];
    char s1[] =  "1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./ ";
    char s2[] =  "`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,. ";
    long long int i,j;
    while(gets(s)){
        for(i=0; i<strlen(s); i++){
            for(j=0; j<strlen(s1); j++){
                if(s[i] == s1[j])
                    p[i] = s2[j];
            }
        }
        p[i] = '\0';
        cout << p << endl;
    }
    return 0;
}
