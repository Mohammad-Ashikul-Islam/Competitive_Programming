#include<bits/stdc++.h>
using namespace std;
class base{
    int x;
    public:
        void setx(int i){x=i;}
        void showx(){cout << x << endl;}
};
class derived:public base{
    int y;
    public:
    void sety(int j){y=j;}
    void showy(){cout << y << endl;}
};
int main()
{
    base *p;
    base b_ob;
    derived d_ob;
    p = &b_ob;
    p->setx(10);
    p->showx();
    p = &d_ob;
    p->setx(14);
    p->showx();
    d_ob.sety(25);
    d_ob.setx(25);
    d_ob.showx();
    d_ob.showy();
    return 0;
}
