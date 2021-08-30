#include<bits/stdc++.h>
using namespace std;
char s[1000005];
int main()
{
        long long i=1;
        while(cin >> s){
            printf("Case %lld:\n",i++);
            long long n,x,y,temp,j;
            cin >> n;
            while(n--){
                cin >> x >> y;
                temp = min(x,y);
                y = max(x,y); x = temp;
                char ch = s[x];
                long long flag=0;
                for(j=x; j<=y; j++){
                    if(s[j] != ch){ flag = 1; break;}
                }
                if(flag==0) cout << "Yes\n";
                else cout << "No\n";
            }
        }
    return 0;
}
