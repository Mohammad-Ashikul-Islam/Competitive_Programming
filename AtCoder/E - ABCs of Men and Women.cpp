#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    if(s.size()==3){
        if(s=="Bob") cout << "Bob\n";
        //else if(s=="...")  cout << "SOMETHING'S WRONG" << endl;
        else if(s[0]!='B' && s[0]!='.') cout << "SOMETHING'S WRONG" << endl;
        else if(s[1]!='o' && s[1]!='.') cout << "SOMETHING'S WRONG" << endl;
        else if(s[2]!='b' && s[2]!='.') cout << "SOMETHING'S WRONG" << endl;
        else cout << "Bob\n";
    }
    else if(s.size()==5){
        if(s=="Alice") cout << "Alice\n";
        else if(s==".....") cout << "CAN'T TELL\n";
        else if (s=="Cindy") cout << "Cindy\n";
        else if(s[0]!='A' && s[0]!='.' && s[0]!='C') cout << "SOMETHING'S WRONG" << endl;
        else if(s[1]!='l' && s[1]!='.' && s[1]!='i') cout << "SOMETHING'S WRONG" << endl;
        else if(s[2]!='i' && s[2]!='.' && s[2]!='n') cout << "SOMETHING'S WRONG" << endl;
        else if(s[3]!='c' && s[3]!='.' && s[3]!='d') cout << "SOMETHING'S WRONG" << endl;
        else if(s[4]!='e' && s[4]!='.' && s[4]!='y') cout << "SOMETHING'S WRONG" << endl;
        else{
            if((s[0]=='.' || s[0]=='A') && (s[1]=='.' || s[1]=='l') && (s[2]=='.' || s[2]=='i') && (s[3]=='.' || s[3]=='c') && (s[4]=='.' || s[4]=='e') )
                cout << "Alice\n";
            else if((s[0]=='.' || s[0]=='C') && (s[1]=='.' || s[1]=='i') && (s[2]=='.' || s[2]=='n') && (s[3]=='.' || s[3]=='d') && (s[4]=='.' || s[4]=='y') )
                cout << "Cindy\n";
            else cout << "SOMETHING'S WRONG" << endl;
        }
    }
    else cout << "SOMETHING'S WRONG" << endl;
    return 0;
}
