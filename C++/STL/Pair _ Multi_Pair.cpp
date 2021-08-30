#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair <string,long long> a("Ashik",26); //Initialization type-1.In Pair,If we could n't declare,string would be '\0',and long long would be 0
    cout << a.first << " " << a.second << endl;
    pair <string,long long > n = make_pair("Nazmul",27); //Initialization type-2
    cout << n.first << " " << n.second << endl;
    pair <string,long long> p = {"Plabon",28};//Initialization type-3
    cout << p.first << " " << p.second << endl;
    //multi_pair
    pair <int,pair<int,int>> x = make_pair(4,make_pair(5,6));//also could be initialized with {4,{5,6}} or x(4,(5,6))
    cout << x.first << " " << x.second.first << " " << x.second.second << endl;
    //We can also use pair in vector a: vector<pair<int,int>> v;
    cout << "\n\n\t\tRead comments carefully\n\n\n";
    return 0;
}
