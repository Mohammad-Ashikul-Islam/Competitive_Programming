#include<bits/stdc++.h>
using namespace std;
void fnc(int p){
    try{
        if(p==0) throw p;
        if(p==1) throw 'a';
        if(p==2) throw 123.23;
    }
    catch(int x){ cout << "Caught an int\n"; }//as int have specific one,so for int,this blog will work
    catch(...)//this can catch everything
    {
        cout << "Cought\n";
    }
}
int main()
{
    cout << "Start\n";
    fnc(1);
    fnc(0);
    fnc(2);
    cout << "End\n";
    return 0;
}
