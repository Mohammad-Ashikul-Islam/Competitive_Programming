#include<bits/stdc++.h>
using namespace std;
int ara[5],top=0;
void push(int x){
    if(top>5)
        cout << "Push not possible,Stack is full\n";
    else{
        ara[++top] = x;
        cout << x << " Pushed Sucessfully\n";
    }
}
void pop(){
    if(top < 1){
        cout << "Pop not possible,Stack is empty\n";
    }
    else{
        top--;
        cout << "Poped Sucessfully\n";
    }
}
void show_stack(){
    if(top<1) cout << "Stack is empty,Nothing to show\n";
    else{
        for(int i=1; i<=top; i++)
            cout << ara[i] << " ";
        cout << endl;
    }
}
int main()
{
    push(1);
    show_stack();
    push(2);
    show_stack();
    push(3);
    show_stack();
    push(4);
    show_stack();
    push(5);
    show_stack();
    push(6);
    show_stack();
    pop();
    show_stack();
    pop();
    show_stack();
    pop();
    show_stack();
    pop();
    show_stack();
    pop();
    show_stack();
    pop();
    show_stack();
    push(1);
    show_stack();
    return 0;
}
