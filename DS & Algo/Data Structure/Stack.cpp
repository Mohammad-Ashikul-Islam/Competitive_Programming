#include<bits/stdc++.h>
using namespace std;
int top=-1,size=1;
int *ara = new int [1];
void resize ()
{
    int i;
    int *newara = new int [size*2];
    for(i=0; i<size; i++) newara[i] = ara[i];
    delete [] ara;
    ara = newara;
    cout << "Before Moderation,Stack Size Was: " << size << endl;
    size = size*2;
    cout << "After Moderation,Stack Size Is: " << size << endl;
}
void push(int x)
{
    if(top+1 < size){
        top++; ara[top] = x;
    }
    else {
        cout << "\tStack Is Full ! ):\n\t\   Resizeing\n\tPlease Wait !\n";
        resize();
        top++; ara[top] = x;
    }
}
void pop()
{
    if(top>=0){
        top--;
        cout << "\tPOPED ! (:\n";
    }
    else{
        cout << "POP Not Possible,Stack Size Is Empty !";
    }
}
void print()
{
    cout << "\tCurrent Stack Is: \n\t";
    for(int i=0; i<=top; i++)
        cout << ara[i] << " ";
    cout << endl;
}
int main()
{
    push(1);
    print();
    push(2);
    print();
    push(3);
    print();
    push(4);
    print();
    push(5);
    print();
    push(6);
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    return 0;
}
