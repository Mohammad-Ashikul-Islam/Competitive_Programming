#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,i;
    set<int> st;
    for(i=0; i<4; i++){
            cin >> x;
            st.insert(x);
    }
    cout << 4-st.size() << endl;
    return 0;
}





