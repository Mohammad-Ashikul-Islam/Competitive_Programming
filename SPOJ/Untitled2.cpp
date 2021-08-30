#include<bits/stdc++.h>
using namespace std;
typedef struct{
    long long a;
    string s;
    string p;
    long long b;
}student;
int main()
{
    student st;
    cin >> st.a >> st.s >> st.p >> st.b;
    cout << st.a << " " << st.s << " " << st.p << " "<< st.b << endl;
    return 0;
}
