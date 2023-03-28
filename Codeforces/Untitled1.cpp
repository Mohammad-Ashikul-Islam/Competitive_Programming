#include<bits/stdc++.h>
using namespace std;

#define ll long long

class A{
    public:
    void fnc(){
        cout << "From Parent\n";
    }
};

class B: public A{
    public:
    int fnc(){
        cout << "From Child & Overrided\n";
        return 1;
    }
};

int main()
{
    B b;
    b.fnc();
    return 0;
}

