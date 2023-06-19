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
    vector <int> vec;
    //vector push
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    for(int i=0; i<vec.size(); i++) cout << vec[i] << " ";
    //vector erase
    vec.erase(vec.begin()+3);
    cout << endl;
    for(int i=0; i<vec.size(); i++) cout << vec[i] << " ";
    vec.push_back(9);
    vec.push_back(10);
    vec.push_back(11);
    //Iterator Using System
    vector <int>::iterator itr;
    itr = vec.begin();
    for(; itr<vec.end(); itr++) cout << *itr << " ";
    return 0;
}
