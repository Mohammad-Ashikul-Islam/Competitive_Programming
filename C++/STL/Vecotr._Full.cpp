#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;

    cout << "begin , end,push_back and iterator \n";
    for(int i=0; i<5; i++) v.push_back(i);
    for(auto itr=v.begin(); itr!=v.end(); itr++)
        cout << *itr << " ";
        cout << endl << "cbegin,cend\n";
    for(auto itr=v.cbegin(); itr!=v.cend(); itr++)
        cout << *itr << " ";
         cout << endl << "rbegin,rend,iterator!\n";
    for(auto itr=v.rbegin(); itr!=v.rend(); itr++)
        cout << *itr << " ";
    cout << "\nsize,capacity,size,max_size,resize,empty,shrink_to_fit: \n";
    cout << "size: " << v.size() << " capacity: " << v.capacity() << " max_size: " << v.max_size() << endl;
    v.resize(4);
cout << "after resizing,size= " << v.size() << "\nshrink_to_fit: \n";
    v.shrink_to_fit();
    cout << "after shrink_to_fit,vector=: \n";
    for(auto itr=v.begin(); itr!=v.end(); itr++)
        cout << *itr << " ";
        cout << "\nempty: \n";
        if(v.empty()) cout << "vector is empty\n";
        else cout << "vector is not empty\n" << "at,front,back,data: \n";
        v.push_back(5);
    cout << "at(4)=" << v.at(4) << " front="<<v.front() << " back="<<v.back();
    int *a = v.data();
    cout << "\nfirst element(v.data())=" << *a<<endl << "clear: \n";
    v.clear();
    if(v.empty()) cout << "Vector is empty\n"<<"assign:\n";
    v.assign(5,10);
    for(auto itr=v.begin(); itr!=v.end(); itr++)
        cout << *itr << " ";
    cout << "\npop_back\n";
    v.pop_back();
    for(auto itr=v.begin(); itr!=v.end(); itr++)
        cout << *itr << " ";
    cout << "\ninsert:\n";
    v.insert(v.begin(),5);
    for(auto itr=v.begin(); itr!=v.end(); itr++)
        cout << *itr << " ";
        cout << "\nerase\n";
        v.erase(v.begin());
        for(auto itr=v.begin(); itr!=v.end(); itr++)
        cout << *itr << " ";
        cout << "\nemplace";
        v.emplace(v.begin(),5);
        for(auto itr=v.begin(); itr!=v.end(); itr++)
        cout << *itr << " ";
        cout << "\nemplace_back\n";
        v.emplace_back(20);
        for(auto itr=v.begin(); itr!=v.end(); itr++)
        cout << *itr << " ";
        cout << "\nswap\n";
        vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    // Swaps v1 and v2
    v1.swap(v2);

    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    return 0;
}
