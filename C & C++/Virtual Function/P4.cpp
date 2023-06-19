#include<bits/stdc++.h>
using namespace std;
class base{
public:
    virtual void f(){
        cout << "From base:\n";
    }
};
class derived1:public base{
    public://if we comment this f(),then also derived2 f() will work
    void f(){cout << "From derived1:\n"; }
};
class derived2:public derived1{//who is driving class of a base class,who have other base,can also us virtual function of root class
    public:
    void f(){ cout << "From derived2:\n";}
};
int main()
{
    base *p;
    base b_op;
    derived1 d_ob1;
    derived2 b_ob2;
    p = &b_op;
    p->f();
    p = &d_ob1;
    p->f();
    p = &b_ob2;
    p->f();
    return 0;
}
