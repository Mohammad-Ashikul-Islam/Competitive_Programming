#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <string> s;
    s.insert("Ashik");//Set Does not accepts duplicate vale,rather it reassigns to the previous
    s.insert("Ashik2");//It orders its data in increasing order
    s.insert("Shuvo");//You can use all other algorithm stl in set
    s.insert("Riyad");
    s.insert("noyon");
    s.insert("Noyon");
    s.insert("Riyad");
    for(auto it=s.begin(); it!=s.end(); ++it) cout << *it << endl;
    return 0;
}
