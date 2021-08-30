#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,u,i;
    char s[10000];
    cin >> t;
    getchar();
    for(u=1; u<=t; u++){
        cin.getline(s,10000);
        long long count =0;
        for(i=0; i<strlen(s); i++){
            if(s[i]=='a') count += 1;
            if(s[i]=='b') count += 2;
            if(s[i]=='c') count += 3;
            if(s[i]=='d') count += 1;
            if(s[i]=='e') count += 2;
            if(s[i]=='f') count += 3;
            if(s[i]=='g') count += 1;
            if(s[i]=='h') count += 2;
            if(s[i]=='i') count += 3;
            if(s[i]=='j') count += 1;
            if(s[i]=='k') count += 2;
            if(s[i]=='l') count += 3;
            if(s[i]=='m') count += 1;
            if(s[i]=='n') count += 2;
            if(s[i]=='o') count += 3;
            if(s[i]=='p') count += 1;
            if(s[i]=='q') count += 2;
            if(s[i]=='r') count += 3;
            if(s[i]=='s') count += 4;
            if(s[i]=='t') count += 1;
            if(s[i]=='u') count += 2;
            if(s[i]=='v') count += 3;
            if(s[i]=='w') count += 1;
            if(s[i]=='x') count += 2;
            if(s[i]=='y') count += 3;
            if(s[i]=='z') count += 4;
            if(s[i]==' ') count += 1;
        }
        cout << "Case #" << u << ": " << count << endl;
    }
    return 0;
}
