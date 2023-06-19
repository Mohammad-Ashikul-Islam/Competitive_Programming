#include<bits/stdc++.h>
using namespace std;
int arr[10000],size=0;
void print()
{
    cout << "MENU:\n";
    cout << "1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n";
}
void display()
{
    int d;
    for(d=0; d<size; d++) cout << arr[d] << " ";
    cout << endl;
}
void insert()
{
    int p,q,z,indx,x;
    cin >> z;
    for(p=0; p<size; p++){
        if(arr[p] > x){
            indx = p;
            for(q=size; q>indx; q--){
                arr[q] = arr[q-1];
            }
            arr[indx] = z;
            break;
        }
    }
    if(p == size) arr[size] = z;
    size++;
}
void dlt()
{
    int d,indx=-1,p;
    cin >> d;
    for(p=0; p<size; p++){
        if(arr[p]==d){
            indx = p;
            break;
        }
    }
    if(indx==-1) {
        cout << "Not found\n";
    }
    else{
    for(p=indx; p<size-1; p++) arr[p] = arr[p+1];
    size--;
    }
}
void search()
{
    int p,indx=-1,s;
    cin >> s;
    for(p=0; p<size; p++){
        if(arr[p]==s){
            indx = p;
            break;
        }
    }
    if(indx==-1) cout << "Not found\n";
    else{
        cout << s << "Number: " << indx+1 << "th element in the array" << endl;
    }
}
int main()
{
    int  p;
    while(1){
            print();
        cin >> p;
        if(p==5)
                break;
        if(p==1)
                insert();
        if(p==2)
                dlt();
        if(p==3)
                search();
        if(p==4)
                display();
    }
    return 0;
}
