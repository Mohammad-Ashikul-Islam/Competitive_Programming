#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sum,temp,res,i,x,t,j,r;
    cin >> t;
    getchar();
    char s[1000];
    for(j=1; j<=t; j++){
            cin >> s;
        sum = 0;
    for(i=0; i<strlen(s); i++){
            r = s[i]- 48;
        sum += pow(r,2);
    }
        res = sum;
        while(sum>9){
            temp = 0; res = sum;
            while(res!=0){
                temp += pow(res%10, 2);
                res /= 10;
            }
            sum = temp;
        }
        if(sum == 1) printf("Case #%lld: %s is a Happy number.\n",j,s);
        else
            printf("Case #%lld: %s is an Unhappy number.\n",j,s);
    }
    return 0;
}
