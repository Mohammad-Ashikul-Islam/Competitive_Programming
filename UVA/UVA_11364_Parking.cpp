#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long unsigned t;
    cin >> t;
    while(t--){
    long long n,i,j,temp,park,walk;
        cin >> n;
     long long ara[n];
        for(i=0; i<n; i++)
        cin >> ara[i];
        for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
        if(ara[j]>ara[j+1]){
                temp = ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
                }
                }
                }
  if(n%2==1)
  park = ara[(n+1/2)];
  else {
        long long x1 = (int)ceil(n+1/2.0);
        long long x2 = (int) floor(n+1/2.0);
        park = ara[x1] + ara[x2];
  }
  walk = (2 * (park - ara[0])) + (2 * (ara[n-1] - park));
  cout << walk << endl;
    }
  return 0;
    }
