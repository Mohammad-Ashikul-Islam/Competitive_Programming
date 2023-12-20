#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

class SingleDigit{
private:
    ll n;
public:
    SingleDigit(ll n){
        this->n = n;
    }
    void ProcessNumber()
    {
        ll sum = 0;
        while(n!= 0){
            sum += n%10;
            n/=10;
        }
        n = sum;
    }
    bool isSignleDigit(){
        if(n<=9) return true;
        else return false;
    }
    ll getDigit(){
        return n;
    }
};

int main()
{
    SingleDigit obj1(123);
    while(obj1.isSignleDigit()==false){
        obj1.ProcessNumber();
    }
    cout << obj1.getDigit() << endl;
    return 0;
}
