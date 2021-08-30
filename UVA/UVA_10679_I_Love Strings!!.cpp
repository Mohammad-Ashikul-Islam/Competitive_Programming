#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100011],p[1010];
    int t,q;
    cin >> t;
    while(t--){
        scanf(" %[^\n]",s);
        cin >> q;
        while(q--){
            scanf(" %[^\n]",p);
            if(strstr(s,p) != NULL) cout << "y\n";
            else cout << "n\n";
        }
    }
    return 0;
}
