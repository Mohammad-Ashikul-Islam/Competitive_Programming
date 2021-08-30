#include<bits/stdc++.h>
using namespace std;
class shape{
public:
    double dim1,dim2;
        void set_dim(){cin >> dim1 >> dim2;}
        virtual void area()=0; //pure virtual function
};
class rectangle:public shape{
    public:
        void area(){ cout << "area of rectangle\n";
            cout << dim1*dim2 << endl;
        }
};
class triangle:public shape{
    public:
    void area(){
        cout << "area of a triangle\n";
        cout << 0.5*dim1*dim2 << endl;
    }
};
int main()
{
    shape *p;
    rectangle r;
    triangle t;
    p = &r;
    p->set_dim();
    p->area();
    p = &t;
    p->set_dim();
    p->area();
    return 0;
}
