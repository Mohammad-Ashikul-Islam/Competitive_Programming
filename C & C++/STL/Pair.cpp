#include<bits/stdc++.h> //for pair: <utility>
using namespace std;
int main()
{
    pair <char,int> p,p1;
    p.first = 'a';
    p.second = 7;
    cout << p.first << p.second << endl;
    //using make_pair()
    p1 = make_pair('a',10);
    cout << p1.first << p1.second << endl; /*pair  g1;         //default
                                pair  g2(1, 'a');  //initialized,  different data type
                                pair  g3(1, 10);   //initialized,  same data type
                                pair  g4(g3);
    //copy of g3 Note: If not initialized, the first value of the pair gets automatically initialized.*/
    p1.swap(p); //swap
    cout << "p:"<< p.first << p.second << endl;
    cout << "p1: " << p1.first << p1.second << endl;
    //Note: We can use ==;!=,>=,<= operator two compare between two pair
    return 0;
}
