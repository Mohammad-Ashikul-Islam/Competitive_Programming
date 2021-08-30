#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    gets(s);
    int i,j;
    char s1[]= "ertyuiop[]dfghjkl;'cvbnm,. ";
    char s2[] =  "qwertyuiopasdfghjklzxcvbnm ";
    for(i=0; i<strlen(s); i++){
            for(j=0; j<strlen(s1); j++){
            if(s[i] == s1[j])
                cout << s2[j];
            else if(s[i] >='A' && s[i]<='Z'){
                    if(tolower(s[i])==s1[j]) cout << s2[j];
            }
            }
    }
    cout << endl;
    return 0;
}
