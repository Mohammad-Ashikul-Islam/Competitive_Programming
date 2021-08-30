#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,m,w,temp,count,sum;
    int ara[100005];
    scanf("%llu",&t);
    while(t--){
       scanf("%d %d",&m,&w);
        for(i=0;i<m;i++){
            scanf("%d",&ara[i]);
        }
        sort(ara, ara+m);
        count = 0;
        sum = 0;
        for(i=0; i<m; i++){
                if(sum+ara[i] > w) break;

            sum += ara[i];
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
