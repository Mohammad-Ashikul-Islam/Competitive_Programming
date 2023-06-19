#include<bits/stdc++.h>
using namespace std;
template <class t>
t swp(t& a, t& b){//here,we can't swap difference data type together.
        t temp = a;
        a = b;
        b = temp;
        //return type can be void or template,template will consider it automatically
}
auto f(auto a, auto b){//auto gives some facillities like tamplate but doesn't works in reference
        return a+b;
}
//template overloading
template <class t1,class t2>
void to(t1 a, t2 b){ cout << a <<" "<< b << " //template function\n"; }
void to(long long a,long long b){ cout << a << " "<< b << " //without template function\n";}
//template class
template <class T>
class abc{
    T a;
    public:
        abc(T x){   a=x;    }
        void st(T x);
        void print(){cout << a << endl; }
};
template <class T>//need to redeclare again for writting the function outside
void abc<T>::st(T x){  a = x; } //this is how to wrrite function name and the others
//default template // constant template
template <class T=int,int size=5>
class xyz{
    T x[size];
    public:
        void print(){cout<< sizeof(x) << endl; }
};
int main()
{
    long long a=5,b=10;
    swp(a,b);
    cout << a << " " << b << endl;
    cout << f(5,6.5) << endl;
    to(5,1.5);
    to(5,1);//both function are same,but compiler will take the most matched one

    abc<int> ob(5);//first,declare template type
    ob.print();
    abc<double> ob1(1.2);//first,declare template type
    ob1.print();
    ob1.st(0.1);//Giving funtion defination outside
    ob1.print();

    xyz<char,7> obx;
    obx.print();
    xyz<> obx1; obx1.print();
    return 0;
}
