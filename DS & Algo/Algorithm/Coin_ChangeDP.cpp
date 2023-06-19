#include<bits/stdc++.h>
using namespace std;
long long fnc(long long ara[],long long n,long long amount)
{
    long long table[n+1][amount+1],i,j;
//take a table where coins will seat to downside and 1 to amount size will seat to right side
    for(i=0; i<=n; i++) table[i][0]=1;
    //all columns of row 0 should be 1.because if we are asked to make 0-tk by some
    //coin of 1 or 2 or 3(etc) tk,then we can have maximum one choice to make it.it is,don't
    //take any coin
    for(i=1; i<=amount; i++) table[0][i]=0;
    //all column of row zero should be zero.because if we are asked to make
    //1 or 2 or 3(etc)tk by a coin of zero tk,we can't make it(in mathematically we have zero
    //zero ways to choice coin to make 1/2/3tk by unlimited coin of zero tk
    for(i=1; i<=n; i++){
            for(j=1; j<=amount; j++){
            //if current coin is less than the amount you are trying to make,you have
            //two choice,take it or don't.if it's greater than that amount,definitely you
            //can't take it.but if it's less or equal to that amount,then you need to
            //calculate the total ways you have to make that amount by taking & not taking
            //it.so for this you need to take the up value of table[i][j] (for not taking)
            // and add it to take taking value.note: if you take it,then you may need some
            //more money to full fill the total amount.so you can use this from the table,
            //bcz this amount is small than the current place of i,j in the table,so it
            //will be always pre calculated before there comes current table[i ][j]
                if(ara[i-1]<=j){
                    table[i][j] = table[i-1][j] + table[i][j-ara[i-1]];
                }
                else
                    table[i][j]=table[i-1][j];
            }
    }
    return table[n][amount];
}
int main()
{
    long long n=3;
    long long ara[n]={1,2,3},amount=5;
    //n=number of coins,amount=total_money_to_make
    cout << fnc(ara,n,amount) << endl;
    return 0;
}
