#include<bits/stdc++.h>
#define m 1000002
using namespace std;

bool arr[m];
int arr1[m];

void sieve()
{

    for(int i=2;i<=m;i++)
    {
        if(arr[i]==0)
        {
            int n=i,sum=0;
            while(n!=0)
            {
                sum=sum+(n%10);
                n=n/10;
            }
            if(arr[sum]==0)
                        arr1[i]=1;
            for(int j=2;i*j<=m;j++)
            {
                arr[i*j]=1;
            }
        }
    }

    for(int i=1;i<=m;i++)
    {
        arr1[i]=arr1[i]+arr1[i-1];
    }
}

int main()
{
    sieve();

    int t;
   scanf("%d",&t);

    while(t--)
    {
        int a,b;

        scanf("%d%d",&a,&b);

        printf("%d\n",arr1[b]-arr1[a-1]);
    }

    return 0;

}
