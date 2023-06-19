#include<bits/stdc++.h>
using namespace std;
void fnc(int p)throw(int,char,double)//restricting what a function can throw
{
        if(p==0) throw p;
        if(p==1) throw 'a';
        if(p==2) throw 123.23;

}
int main()
{
    cout << "Start\n";
    try{    fnc(0); }
    catch(int i){cout << "Caught an integer\n";}
    catch(char ch){cout << "Caught a character\n";}
    catch (double d){cout << "Caught a double\n";}
    cout << "End\n";
    return 0;
}

