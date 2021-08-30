#include<bits/stdc++.h>
using namespace std;
void print(stack <int> s){
    stack <int> p = s; //stack <int> s is pass by value but stack <int> &s is pass by refernce,same for queue
    while(!p.empty()){
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;
}
void show_q(queue <int> r){
    queue <int> x = r;
    while(!x.empty()){
        cout << x.front() << " ";
        x.pop();
    }
    cout << endl;
}
int  main()
{
    stack <int> s;
    cout << "size,top,push,pop\n";
    for(auto i=0; i<5; i++)
            s.push(i);
    cout << "size=" << s.size() << endl << "\nelements:\n";
    print(s);
    cout << "\ntop: " << s.top() << endl << "\npop\n";
    s.pop();
     print(s);
     cout << "\nQueue\n" << "push: \n";
     queue <int> q;
     for(auto i=1; i<=5; i++)
        q.push(i);
        show_q(q);
     cout << "\nsize,front,back\n";
     cout << "size: " << q.size() << " front: " << q.front() << " back: " << q.back() << endl << "\npop\n";
     q.pop();
     show_q(q);
     if(q.empty()) cout << "Queue is empty!";
     else cout << "Queue is not empty\n";
     return 0;
}
