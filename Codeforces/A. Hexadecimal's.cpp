#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    int m=2,i=2;
    while(m<=1000000000){
        m=v[i]+v[i-1];
        i++;
        v.push_back(m);
    }

    //for(i=0; i<v.size(); i++) cout << v[i] << endl;

    long n;
    cin >> n;
    for(i=0; i<v.size(); i++){
                int x=v[i];
            for(int j=0; j<v.size(); j++){
            if(binary_search(v.begin(),v.end(),n-v[i]-v[j])==true)
            {cout << v[i] << " " << v[j]<< " " << n-v[i]-v[j] << endl; return 0;}
            }
    }
    cout << "I'm too stupid to solve this problem\n" ;
    return 0;
}
