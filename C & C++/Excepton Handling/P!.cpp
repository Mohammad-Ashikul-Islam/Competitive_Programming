#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=5,y=0;
    try{
        int r = x/y;
        throw r;
    }
     x = 6;//this will never be executed
    catch(int p){
        cout << "From catch block\n";
    }
    cout << x << " " << y << endl;
    return 0;
}
