#include<bits/stdc++.h>
using namespace std;
class coord{
    int x,y;
    public:
        coord(int a,int b){ x=a;   y=b;  }
        coord(){  x=0; y=0;  }
        void show(){
            cout << x << " " << y << endl;
        }
        friend coord operator+(coord m1,coord m2);
        friend coord operator++(coord& o);
        friend coord operator++(coord& o,int notused);

};
coord operator+(coord m1,coord m2){
    coord temp;
    temp.x = m1.x+m2.x;
    temp.y = m1.y+m2.y;
    return temp;
}
coord operator++(coord& o){
    o.x = o.x+1;
    o.y = o.y+1;
}
coord operator++(coord& o,int notused){
    o.x = o.x+1;
    o.y = o.y+1;
}
int main()
{
    coord ob1(10,12),ob2(7,10),ob3;
    ob3 = ob1+ob2;
    ob1.show();
    ob2.show();
    ob3.show();
    ++ob3;
    ob3.show();
    ob3++;
    ob3.show();
    return 0;
}

