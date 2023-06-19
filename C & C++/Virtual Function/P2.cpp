#include<bits/stdc++.h>
using namespace std;
class base{
    public:
        int x;
        base(int i){ x= i;}
        virtual void fnc(){
            cout << "Using base version: \t";
            cout << x << endl;
        }
};
class derived1:public base{
    public:
        derived1(int y):base(y) {};
        void fnc(){
            cout << "Using Derived1:\t";
            cout << x+x << endl;
        }
};
class derived2:public base{
    public:
        derived2(int z):base(z){}
        void fnc(){
            cout << "Using derived2\t";
            cout << x*x << endl;
        }
};
int main()
{
    base *p;
    base b_ob(10);
    derived1 d_ob1(30);
    derived2 d_ob2(30);
    p = &b_ob;
    p->fnc();
    p = &d_ob1;
    p->fnc();
    p = &d_ob2;
    p->fnc();
    return 0;
}
