#include<iostream>
#include<iterator>
#include<deque>
using namespace std;
int main()
{
    long long n,x,d,i;
    cin >> n >> d;
    deque <long long> dq;
    for(i=0; i<n; i++){
        cin >> x; dq.push_back(x);
    }
    for(i=0; i<d; i++){
        x = dq.front();
        dq.pop_front();
        dq.push_back(x);
    }
    for(auto it=dq.begin(); it!=dq.end(); it++) cout << *it << " ";
    cout << endl;
    return 0;
}
