#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin >> x;
//Ekhon Bola Holo  X(suppose 1010) Er Dan Thekhe 3no Bit E Jai Check Kora Ota 0 Naki One
//But How? Do (1010 & 0100),if Comes Zero Then It's Zero But If It's Not Zero,
//Suppose (1110 & 0100) !=0 Then That Bit Was One !!

    long long temp = 1;
    temp = temp << 2;//Why Two? Think Yourself !!
    if(x & temp) cout << "Was One !!\n";
    else cout << "Was Zero !!\n";
//Now We Need To Off That Bit.How To Do?
//If Its Already Zero,No Need To Do Anything But If One,Use Xor
    if(x&temp){
    temp =1; temp = temp<<2;
    x = x^temp;
    cout << x << endl;
}
    return 0;
}

