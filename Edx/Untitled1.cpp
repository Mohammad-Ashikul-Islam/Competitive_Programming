#include<iostream>
#include<fstream>
using namespace std;
#define ll long long
int main()
{
    ifstream fi("input.txt");
    ofstream fo("output.txt");
    ll a,b;
    fi >> a >> b;
    fo<<a+b << endl;
    return 0;
}
