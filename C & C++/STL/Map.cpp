#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string,int> m;
    m["sazzad"] = 1;
    m["shuvo"] = 2;
    m["ashik"] = 17;
    m.insert(make_pair("samin",3));
    m["ashik"] = 26;
    for(auto itr=m.begin(); itr!=m.end(); ++itr) cout << itr->first<<" "<<itr->second<<endl;
    return 0;
}
