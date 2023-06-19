#include<bits/stdc++.h>
using namespace std;
void permute(string s)
{
    sort(s.begin(),s.end());
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end())); /*suppose we have 123,then it will generate 132,213.231,312,
    321 And NULL */
}
int main()
{
    string s;
    cin >> s;
    permute(s);
    return 0;
}
