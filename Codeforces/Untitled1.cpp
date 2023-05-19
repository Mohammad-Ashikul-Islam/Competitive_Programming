#include<bits/stdc++.h>
using namespace std;

#define ll long long

class employee{
public:
 void fnc(){
    cout << "Employee Class\n";
 }
} ;

class teacher:public employee{
public:
};

int main()
{
    employee e;
    e.fnc();
    teacher t;
    t.fnc();
    return 0;
}
