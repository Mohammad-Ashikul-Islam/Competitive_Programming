#include<bits/stdc++.h>
using namespace std;
string s;
int n;
deque <char> q;
void subset(long long i)
{
    if(i==n){
        if(q.empty()) cout << "{}";
        else{
            for(auto it=q.begin(); it!=q.end(); it++) cout<<*it;
        }
        cout << endl;
    }
    else{
        subset(i+1);
        q.push_back(s[i]);
        subset(i+1);
        q.pop_back();
    }
}
int main()
{
    cout << "Enter The Total Character Number: ";
    cin >> n;
    cout << "Enter The Characters: ";
    cin >> s;
    subset(0);
    return 0;
}
