#include<bits/stdc++.h>
using namespace std;
void fnc()
{
    try{
    throw 5;
    }
    catch(int x){
        cout << "Caught an integer\n";
        cout << x << endl;
        throw;//he'll through what he got which means rethrowing
    }
}
int main()
{
    cout << "Begin\n";
    try{
        cout << "Outer Try";
        fnc();
    }
    catch(int x){
        cout << "from outer catch\n";
        cout << x << endl;
    }
    return 0;
}
