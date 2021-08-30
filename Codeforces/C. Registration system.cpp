#include<bits/stdc++.h>
using namespace std;
long long fnc(long long c,long long ara[])
{
    long long i=0;
    while(c){
    ara[i] = c%10; c /= 10;
    i++;
    }
    reverse(ara,ara+i);
    return i;
}
int main()
{
    map <string,long long> st;
    long long n;
    cin >> n;
    getchar();
    string s;
    while(n--){
            getline(cin,s);
            auto it = st.find(s);
        if(it == st.end()){
            st.insert(st.end(),pair <string,long long>(s,1));
            cout << "OK\n";
        }
        else{
                long long c = it->second;
                long long ara[100006];
                long long j=0,p=fnc(c,ara);
                for(; j<p; j++) s.push_back(ara[j]+'0');
                cout << s << endl;
                it->second += 1;
        }
    }
    return 0;
}
