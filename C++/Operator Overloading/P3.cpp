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
        void operator++(){//++obj1 or prefix incement
            this->x = this->x+1;
            this->y = this->y+1;
        }
         void operator++(int notused){//obj1++ or postfix increment.int not used must write in
            this->x = this->x+1;      //in here.int not used is a sign to differenciate between
            this->y = this->y+1;      //++a & a++ function.nothing else
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
    ob1.show();
    ++ob1;
    ob1.show();
    ob2++;
    ob2.show();
    coord ob3;
    ob3 = ob1++;
    return 0;
}
