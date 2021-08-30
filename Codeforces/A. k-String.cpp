#include<bits/stdc++.h>

using namespace std;

int main()
{


    int n;
    cin>>n;
    string s;
    cin>>s;

    map<char,int> m;
    for(int i=0;i<s.size();i++)
    {
        if(m.find(s[i])!=m.end())
        {
            m[s[i]]++;
        }
        else
        {
            m[s[i]]=1;
        }

    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(it->second%n!=0)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(auto it=m.begin();it!=m.end();it++)
        {
            for(int i=0;i<(it->second)/n;i++)
            {
                cout<<it->first;
            }
        }

    }
    cout<<endl;
    return 0;

}
