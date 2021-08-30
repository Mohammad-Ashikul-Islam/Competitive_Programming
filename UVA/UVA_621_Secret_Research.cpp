#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    while(n--){
          char s[1000];
            cin>>s;
            if((strcmp(s,"1")==0) || (strcmp(s,"4")==0) || (strcmp(s,"78")==0))
            cout << "+" <<  endl;
            else if(s[strlen(s)-2]=='3' && s[strlen(s)-1]=='5')
            cout << "-"<<endl;
            else if(s[0]=='9' && s[strlen(s)-1] == '4')
            cout << "*" << endl;
            else cout << "?" << endl;
          }
    return 0;
}
