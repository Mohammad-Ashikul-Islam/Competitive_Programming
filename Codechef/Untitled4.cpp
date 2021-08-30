#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    vector<int> ar,br;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        ar.push_back(x);
    }
    for(int i=0;i<b;i++){
        int y;
        cin>>y;
        br.push_back(y);
    }
    unordered_set<long long> s;
    for(int i=0;i<ar.size();i++){
        for(int j=0;j<br.size();j++){
            if(s.count(ar[i]+br[j]) != 1){
                cout << i << " " << j << endl;
                s.insert(ar[i]+br[j]);
            }
            if(s.size()==a+b-1) break;
        }
        if(s.size()==a+b-1) break;
    }
    return 0;
}

