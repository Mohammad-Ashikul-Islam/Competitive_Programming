#include<bits/stdc++.h>
using namespace std;
class coord{
    int a[5];
    public:
    int& operator[](int i){
        if(i<0 || i>=5){
            cout <<"Out of bond\n";
        }
        else return a[i];
    }
    void show()
    {
        int i;
        for(i=0; i<5; i++) cout << a[i] << " ";
        cout << endl;
    }
};
int main()
{
    coord ob;
    ob[0] = 33;
    ob[1] = 34;
    ob[2] = 35;
    ob[4] = 36;
    ob.show();
    return 0;
}
