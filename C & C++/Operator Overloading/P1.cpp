#include<bits/stdc++.h>
using namespace std;
class coord{
    int a,b;
    public:
        void set_val(int x,int y){  a=x; b=y;  }
        void show(){  cout << a << " " << b << endl;  }
        coord operator+(coord o){ //this is for object
        coord temp;
        temp.a = this->a + o.a;//left of the operator side comes automatically as this(when left is object
        temp.b = this->b + o.b;
        return temp;
        }
        coord operator+(int x){ //this is for   integer
        coord temp;
        temp.a = this->a + x;//left of the operator side comes automatically as this(when left is object
        temp.b = this->b + x;
        return temp;
        }
        //should be carefull what we are returning,object or others.look difference of next and above
        bool operator>(coord temp){ //simillar for '<' operator
        if((this->a > temp.a) && (this->b > temp.b)) return true;
        else return false;
        }
        bool operator&&(coord temp){ //simillar for '||' operator
        if((this->a && temp.a) && (this->b && temp.b)) return true;
        else return false;
        }
        coord operator>>(int x){
            coord temp;
            temp.a = this->a >> x;
            temp.b = this->b >> x;
            return temp;
        }
};
int main()
{
    coord ob1,ob2,ob3;
    ob1.set_val(10,15);
    ob2.set_val(13,23);
    ob3 = ob1+ob2;
    ob3.show();
    coord ob4;
    ob4 = ob1+100;//for interger in operator's right.left goes as this automatically
                //giving 100+ob1 gives error as only object can go as this operator
    ob4.show();
    if(ob2 > ob1) cout << "Ob4 is grater than ob1\n";
    else cout << "Ob4 is not greater than ob1\n";
    if(ob4&&ob1) cout << "Logical And True\n";
    else cout << "Logical And Not True\n";
    coord ob5 = ob4>>4;
    ob5.show();
    return 0;
}
