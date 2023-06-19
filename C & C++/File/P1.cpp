#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream of;//also could be done as ofstream of("P1__.txt")
    of.open("P1__.txt");//If exists,opens it.else creates it
    of << "Washington" << endl << "London" << endl << "Paris"<<endl << "Moscow" <<endl;
    string s;
    getline(cin,s);
    of << s << endl;//File Takes Input As cin >> s;
    of.close();
    of.open("P1__.txt");//Open The Previous
    of << "USA" << endl << "UK" << endl << "France"<<endl << "Russia" <<endl;//Will overwrite
    cin >> s;//For not overwriting,use append system
    of << s << endl;
    of.close();
    return 0;
}
