#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    char s[10];
    cin >> n;
    getchar();
    while(n--){
        cin >> s;
        if(strlen(s)==5) cout <<"3\n";
        else if((s[0]=='o' && s[2]=='e')||
                (s[1]=='n' && s[2]=='e')||
                (s[0]=='o' && s[1]=='n'))
                    cout << "1\n";
        else cout << "2\n";
    }
    return 0;
}
