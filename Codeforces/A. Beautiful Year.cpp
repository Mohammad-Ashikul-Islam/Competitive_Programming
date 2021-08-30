#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <long> st;
    char s[10];
    long n=0;
    cin >> s;
    long l=strlen(s);
    for(int i=0; i<l; i++)
        n = (n*10)+((s[i]-'0'));
    long x =n;
    while(st.size() != l){
        if(!st.empty())st.clear();
        x++;
        long q = x;
        while(q){
        long temp = q%10;
            st.insert(temp);
            q /= 10;
        }

    }
    cout << x <<endl;
    return 0;
}
