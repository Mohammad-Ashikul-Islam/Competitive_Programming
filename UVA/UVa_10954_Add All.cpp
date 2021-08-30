#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,x;
    while(cin >> t){
        if(t==0) break;
        priority_queue<long, vector<long>, greater<int> > v;
        for(i=0; i<t; i++){cin >>x; v.push(x);}
        long long sum=0;
       while(v.size()>1){
        long long temp=v.top();
        v.pop();
        temp += v.top();
        v.pop();
        v.push(temp);
        sum += temp;
       }
    cout << sum << endl;
    }
    return 0;
}
