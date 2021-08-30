#include<bits/stdc++.h>
using namespace std;
int main()
{
    long p,c,casee=0;
    while(cin >> p >> c){
        if(p==0 && c==0) break;
        casee++;
        deque<long> d,result;
        for(int i=1; i<=p && i<=1000; i++)d.push_back(i);
        for(int i=1; i<=c; i++){
            char ch;
            cin >> ch;
            if(ch=='N'){
                long temp=d.front();
                d.pop_front();
                d.push_back(temp);
                result.push_back(temp);
            }
            else{
                long s;
                bool flag=false;
                cin >> s;
                for(auto it=d.begin(); it!=d.end(); it++){
                    if(*it==s){flag=true; d.erase(it); d.push_front(s); break;}
                }
                if(flag==false) d.push_front(s);
            }
        }
        printf("Case %d:\n",casee);
        for(auto it=result.begin(); it!=result.end(); it++) cout << *it << endl;
    }
    return 0;
}
