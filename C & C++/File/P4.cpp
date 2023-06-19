#include<bits/stdc++.h>
using namespace std;
void fnc()
{
    char name[10], address[10], phone[10];
    cout<<"input a name, address and phone number : ";
    cin>>name>>address>>phone;

    ofstream fout;
    fout.open("P4__.txt",ios::app);
    fout<<name<<endl<<address<<endl<<phone<<endl;
    fout.close();
}
int main()
{
    fnc();
    char name[10],address[10],phone[10];
    string nam;
    //ifstream fin("info.txt");
    ifstream fin;
    fin.open("P4__.txt");//Gives error if p4__.txt doesnot exists
    if(!fin)
    {
        cout<<"no such file exist"<<endl;
        exit(1);
    }

    fin>>name>>address>>phone;

    getline(fin, nam);
    fin.close();

    cout<<name<<endl<<address<<endl<<phone<<endl;
    cout<<nam;

    return 0;
}
