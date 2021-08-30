#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n+11];

    int max,min;
    max=0;
    min=INT_MAX;
    set<int> st;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;

        st.insert(a);
    }
    if(st.size()==1)
        cout<<0<<endl;
    else if(st.size()>3)
        cout<<-1;
    else if(st.size()==2){
        if((*st.begin()+*st.rbegin())%2==0)
            cout<<(*st.begin()+*st.rbegin())/2-*st.begin();
        else
            cout<<abs(*st.begin()-*st.rbegin());
    }
    else if(st.size()==3)
    {
        auto it= st.begin();
        int a=*it;
        int b=*(++it);
        int c=*(++it);
        if(b-a==c-b)
            cout<<b-a<<endl;
        else
            cout<<-1<<endl;

    }

    return 0;
}
