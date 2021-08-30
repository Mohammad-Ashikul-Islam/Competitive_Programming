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
        arr1[i]=arr1[i]+arr1[i-1]; //this loop is for calculating commulative sum
        //before submitting in uva,remove all the comments,uva doesnot supports comments
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

        printf("%d\n",arr1[b]-arr1[a-1]); /*Here Used commuative sum system.for example:
        commulative sum for natural number:
        1st cs=1+0=1, 2nd cs=1+2=3,3rd cs=3+3=6, 4th cs=6+4=10......
        by the same system if you store the bool in an new array and count that
        how many digit prime number are there and minus the total number of digit prime till 'a'
        we will get the number of digit prime stays between 'a' and 'b'.goto sieve comment above^   */
    }

    return 0;

}
