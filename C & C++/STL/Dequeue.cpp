#include<iostream>
#include<deque>
using namespace std;
int main()
{
    //Vector and deque are same.just extra feature push_front(),pop_front() can be used in dequeue
    deque <int> d;
    d.push_back(7);
    d.push_front(6);
    for(auto itr=d.begin(); itr!=d.end(); itr++) cout << *itr << " ";
    cout << endl;
    d.push_back(8);
    d.pop_front();
    d.pop_back();
    for(auto itr=d.begin(); itr!=d.end(); itr++) cout << *itr << " ";
    cout << endl;
    //other features are similar to <vector>
    return 0;
}
