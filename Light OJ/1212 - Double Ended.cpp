#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int u=1; u<=t; u++){
        printf("Case %d:\n",u);
        int l,c;
        cin >> l >> c;
        deque<int> d;
        for(int k=1; k<=c; k++){
            string s;
            cin >> s;
            if(s=="popLeft"){
                if(d.empty()==true) cout << "The queue is empty\n";
                else{
                    cout << "Popped from left: "<< d.front() <<endl;
                    d.pop_front();
                }
            }
            else if(s=="popRight"){
                if(d.empty()==true) cout << "The queue is empty\n";
                else{
                    cout << "Popped from right: "<< d.back()<<endl;
                    d.pop_back();
                }
            }
            else if(s=="pushLeft"){
                    long x; cin >> x;
                if(d.size()==l) cout << "The queue is full\n";
                else{
                    cout << "Pushed in left: "<<x << endl;
                    d.push_front(x);                }
            }
            else if(s=="pushRight"){
                    long x; cin >> x;
                if(d.size()==l) cout << "The queue is full\n";
                else{
                    cout << "Pushed in right: "<<x << endl;
                    d.push_back(x);                }
            }
        }
    }
    return 0;
}
