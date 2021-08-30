#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    long long g;
    while(cin >> g >> s){
        long long i,j,r=strlen(s)/g;
        char p[1000];
        stack <char> st;
        for(i=0; i<strlen(s); i++){
        st.push(s[i]);
        if((i+1)%r == 0){
            while(!st.empty()){ cout << st.top(); st.pop();  }
        }
        }
        cout << endl;
    }
    return 0;
}
