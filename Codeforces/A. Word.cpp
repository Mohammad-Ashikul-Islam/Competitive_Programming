#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    scanf("%s",s);
    long long u=0,l=0,i;
    for(i=0; i<strlen(s); i++){
        if(s[i]>='A' && s[i]<='Z') u++;
        else l++;
    }
          if(l >= u){
            for(i=0; i<strlen(s); i++){
                    char ch = s[i];
                printf("%c", tolower(ch));
            }
          }
    else {
        for(i=0; i<strlen(s); i++) { char ch=s[i];   printf("%c", toupper(ch)); }
    }
    cout << endl;
    return 0;
}

