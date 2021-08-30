#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<list>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    list <int> li;
    li.push_back(5);
    li.push_back(6);
    li.push_back(7);
    li.push_back(8);
    li.push_back(9);
    li.push_front(4);
    li.push_front(3);
    //Iterator
    list <int>::iterator itr = li.begin();
    for(; itr!=li.end(); itr++) cout << *itr << " ";
    cout << endl;
    //front_pop
    li.pop_front();
    for(itr=li.begin(); itr!=li.end(); itr++) cout << *itr << " ";
    li.clear();
    for(itr=li.begin(); itr!=li.end(); itr++) cout << *itr << " ";
    return 0;
}
