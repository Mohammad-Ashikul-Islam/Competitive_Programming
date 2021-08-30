#include<bits/stdc++.h>
using namespace std;
char s[100000],p[100000];
int main()
{
    int i,ind;
    while(scanf("%s %s",s,p) != EOF){
    int j=0;
        for(i=0; s[i] != '\0'; i++){
            for(; p[j]!='\0'; j++){
                if(s[i]==p[j]) break;
                }
            if(p[j]=='\0') break;
            j++;
        }

        if(s[i] == '\0') cout << "Yes\n";
        else cout <<"No\n";
    }

    return 0;
}
