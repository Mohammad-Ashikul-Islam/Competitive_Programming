#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    map<string,ll> name_count;
    stack<string> name_list;
    string name;
    while(cin >> name){
        name_count[name]++;
        name_list.push(name);
    }
    while(!name_list.empty()){
        name = name_list.top();
        if(name_count[name] != -1){
            cout << name << " " << name_count[name] << endl;
            name_count[name] = -1; // -1 to indicate that it's visited
        }
        name_list.pop();
    }
    return 0;
}
