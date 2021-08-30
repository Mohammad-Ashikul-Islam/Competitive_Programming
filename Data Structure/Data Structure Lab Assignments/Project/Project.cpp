#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100000
long long ara[MAX_SIZE],size=0;
void Print()
{
    cout << "Select Any Menu Option's Number For It's Operation: \n";
    cout << "#Insert-> 1\t#Delete-> 2\t#Search-> 3\t#Display-> 4\t#Exit-> 0\n";
}
void Display()
{
    cout << "Elements: \n";
    for(int i=0; i<size; i++) cout << ara[i] << " ";
    cout << endl;
}
long long B_S(long long temp)
{
    long long b=1,e=size-1,m=(b+e)/2;
    while(m <= e){
        if(ara[m]==temp) return m;
        else if(temp > ara[m]) b = m+1;
        else e = m-1;
        m = (b+e)/2;
    }
    return -1;
}
void Insert()
{
    long long i,j,temp,in,x;
    cout << "Enter The Element To Insert: ";
    cin >> temp;
    for(i=0; i<size; i++){
        if(ara[i] > temp){
            in = i;
            for(j=size; j>in; j--){
                ara[j] = ara[j-1];
            }
            ara[in] = temp;
            break;
        }
    }
    if(i == size) ara[size] = temp;
    size++;
    cout << temp << " Inserted Sucessfully !\n";
}
void Delete()
{
    cout << "Enter The Element To Delete !\n";
    long long temp,in,i;
    cin >> temp;
    in = B_S(temp);
    if(in==-1) {
        cout << temp << " Not Found In The Array !\n";
        return;
    }
    for(i=in; i<size-1; i++) ara[i] = ara[i+1];
    size--;
    cout << temp << " Deleted Successfully !\n";
}
void Search()
{
    long long i,temp,in;
    cout << "Enter The Element To Search: \n";
    cin >> temp;
    in = B_S(temp);
    if(in==-1) cout << temp << " Not Found In The Array !\n";
    else{
        cout << temp << " Is In The Index Number " << in << " !\n";
    }
}
int main()
{
    long long x;
    while(1){
            Print();
        cin >> x;
        if(x==0) break;
        else if(x==1) {
                if(size == MAX_SIZE) cout << "Can't Insert,No More Space Available !\n";
                else
                Insert();
        }
        else if(x==2){
            if(size==0) cout << "Can't Delete,No Elements Exists !\n";
            else Delete();
        }
        else if(x==3) Search();
        else if(x==4) Display();
        else cout << "Invalid Choice,Slect Again !\n";
        cout << endl;
    }
    return 0;
}
