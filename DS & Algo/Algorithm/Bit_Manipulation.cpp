#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin >> x;
//Ekhon Bola Holo  X(suppose 1010) Er Dan Thekhe 3no Bit E Jai 1 Kore Di Asho.Kemne Korba? (:
//ans= 1010 || 0100,Or Gate E Ekta 1 Holeo 1 Ashle.But How To Generate 0100?
    long long temp = 1;
    temp = temp << 2;//Why Two? Think Yourself !!
    x = x|temp;
    cout << x << endl;
    return 0;
}
