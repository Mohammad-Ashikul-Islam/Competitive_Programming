#include<bits/stdc++.h>
using namespace std;
void print(priority_queue <int> x){
    while(!x.empty()){
        cout << x.top() << " ";
        x.pop();
    }
    cout << endl;
}
int main()
{
    priority_queue <int> p;
    p.push(5);
    p.push(6);
    p.push(7);
    print(p);
    return 0;
}
