#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    From Euler theorem we know a^phi(m) %m=1,where a,m co-prime
here phi(5)=4 and 1,2,3,4 all are co-prime to 5..so,if any power of them
divisible by 4 ans will be 1 ..
so (1^4x+2^4x+3^4x+4^4x)=4%5=4..where n=4x..
else if n%4=1,ans=(1+2+3+4)%4,n%4=2, ans=(1+4+9+16)%4 n%4=3 , ans=(1+8+27+64)%5
    which all are 0.hope you will understand
    Work With Pen And Paper,It Will Be More Easy To Understand !!
    */
    string s;
    cin >> s;
    long long temp=1;
    for(long long i=0; i<s.size(); i++){
        if(i==s.size()-2) temp = temp*(s[i]-'0');
    }
    temp = (temp*10)+(s[s.size()-1]-'0');
    if(s.size()==1) temp = s[0]-'0';
    if(temp%4==0) cout << "4\n";//(  (1%5)+(1%5)+(1%5)+(1%5)  ) % 5
    else if(temp%4==1) cout << 0 <<endl;//(  (1)+(2)+(3)+(4)  )%5
    else if(temp%4==2) cout << "0\n";//(  ((1*1))+((2*2))+((3*3))+((4*4)) )%5
    else cout << "0\n";//(  (1^3) + (2^3) + (3^3) + (4^3) )  % 5
    return 0;
}
