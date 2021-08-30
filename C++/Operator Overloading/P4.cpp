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

        coord operator++(int notused){//while assigning,this overloading function should be used
            this->x = this->x+1;      //for both ++ob or ob++.both becomes same while assigning to
            this->y = this->y+1;
            return *this;      //object with increment
        }
};
int main()
{
    coord ob1(10,23),ob2;
    coord ob3;
    ob3 = ob1++;
    ob3.show();
    return 0;
}
