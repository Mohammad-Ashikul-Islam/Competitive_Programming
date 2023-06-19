#include<bits/stdc++.h>
using namespace std;
int fnc(int ara[],int low, int high)
{
    int temp,t,j,pivot = ara[high]; //temp is an indicator
            //tell amaderk bole,kototuku index porjonto pivot er cheye choto songkha ache
    for(temp=low-1,j=low; j<high; j++){
        if(pivot > ara[j]){ /*ara[i] kono songkhar cheye hoye gele tak temp amra temp+1 er
        jaigai pathabo.karon temp nirdesh kore,se ebong tar purboborti songkha gulo pivot
        er cheye choto*/
        temp++;
        t = ara[temp];
        ara[temp] = ara[j];
        ara[j] = t;
        }
    }
    /*Loop seshe low thekhe temp porjonto pivot er cheye sob choto songkha
    gulo ache(sort kora na/sort kora,anyhow).Tarmane,temp+1 hocche pivot er perfect place,
    jekhane tar purbe tar cheye choto ebong pore tar cheye boro songkha gulo ache */
    t = ara[temp+1];
    ara[temp+1] = ara[high];//pivoter current index o pivot er perfect index er swap
    ara[high] = t;
    //pivot jotha sthane boshe geche.ta return kori.jate tar age o pore quicksort kora jai
    return temp+1;
}
void quick_sort(int ara[],int low,int high){
    if(low >= high) return;
    int p;
    p = fnc(ara,low,high);
    quick_sort(ara,low,p-1);
    quick_sort(ara,p+1,high);
}
int main()
{
    int ara[]={1,5,9,6,3,8,4,7,2 };
    quick_sort(ara,0,8);
    for(int i=0; i<=8; i++) cout << ara[i] << " ";
    return 0;
}
