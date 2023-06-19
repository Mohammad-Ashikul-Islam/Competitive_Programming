#include<bits/stdc++.h>
using namespace std;
void mrg(int ara[], int left,int mid,int right)
{
    int i,ls,rs;
    ls = mid-left+1;
    rs = right-mid;
    int l[ls],r[rs];
    for(i=0; i<ls; i++) l[i] = ara[left+i];
    for(i=0; i<rs; i++) r[i] = ara[mid+1+i];
    int ina=left,inl=0,inr=0,temp;
    while(inl<ls && inr<rs){
        if(l[inl]<r[inr]){
            ara[ina] = l[inl];
            inl++;
            ina++;
        }
        else{
        ara[ina] = r[inr];
        inr++;
        ina++;
        }
    }
    while(inl <ls){
    ara[ina] = l[inl];
    inl++;
    ina++;
    }
    while(inr < rs){
        ara[ina] = r[inr];
        inr++;
        ina++;
    }
}
void merge_sort(int ara[], int left,int right)
{
    if(left>=right) return;
    int mid = left+(right-left)/2;
    merge_sort(ara,left,mid);
    merge_sort(ara,mid+1,right);
    mrg(ara,left,mid,right);
}
int main()
{
    int ara[9] = {5,2,9,6,1,8,4,7,3};
    merge_sort(ara,0,8);
    for(int i=0; i<9; i++) cout << ara[i] << " ";
    return 0;
}
