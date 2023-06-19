#include<bits/stdc++.h>
using namespace std;
void print(list <int> m){
    for(auto itr=m.begin(); itr != m.end(); itr++) //begin() returns a pointer(iterator) of first element but front() returns the value of first element
        cout << *itr << " ";             //Same for end() and back()
    cout << endl;
}
int main()
{
    list <int> l;
    cout << "push_back,push_front,begin,end\n";
    for(auto i=5; i>=1; i--){
        l.push_front(i);
        l.push_back(i*10);
    }
    print(l);
    cout << "front,end,empty\n";
    cout << "front: " << l.front() << " back: " << l.back() << " empty: \n";
    if(l.empty()) cout << "list is empty !\n";
    else cout << "list is not empty !\n";
    cout << "pop_front,pop back\n";
    l.pop_front(); l.pop_back();
    print(l);
    cout << "before remove: \n"; //remove() removes all the elements that compare equal to value
    l.push_back(5);
    print(l);
    l.remove(5);
    cout << "after remove->5: \n";
    print(l);
    cout << "erase: \n"; // removes from the list either a single element or a range of element
    auto r = l.begin();
    auto s = r;
    r++;
    advance(s,4);
    l.erase(r,s);                            //l.erase(l.begin()+3,l.begin()+5) won't work.because list has a sequential access not random like an array
    print(l);                              //For single element use,element's position's iterator
    cout << "assign: \n";
    list <int> x;
    x.assign(5,7);//type-1;
    cout << "list-x: ";
    print(x);
    x.clear();
    x.assign(l.begin(), l.end());//type-2;
    cout << "list-x_new: "; //type-3 is similar to type-2,just you may use array as (arr,arr+n) or something like that
    print(x);
    cout << "insert: \n" << "one element in l and multiple in x\n";
    auto itr = l.begin();
    advance(itr,3);
    l.insert(itr,8);
    cout << "L=\t";
    print(l);
    itr = x.begin();
    advance(itr,2);
    x.insert(itr,2,8);
    cout << "x=\t";
    print(x);
    cout << "\n\n\n\t\tREAD ALL THE COMMENTS CAREFULLY !!!\n\n\n";
    return 0;
}
