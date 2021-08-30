#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    long long t,temp;
    cin >> t;
    getchar();
    while(t--){
            stack <char> st;
        gets(s);
        temp = 0;
        if(strcmp(s,"\n")==0){ cout << "Yes\n"; continue;}
        for(int i=0; i<strlen(s); i++){
            if(s[i]=='(' || s[i]=='[') st.push(s[i]);
            else{
                    if(s[i]==' ') continue;
                if(st.empty()){ temp=1; break; }
                if((s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='[')) st.pop();
                else{
                    temp=1;
                    break;
                }
            }
        }
        if(temp==0 && st.empty()==true) cout << "Yes\n";
        else  cout << "No\n";
    }
    return 0;
}
