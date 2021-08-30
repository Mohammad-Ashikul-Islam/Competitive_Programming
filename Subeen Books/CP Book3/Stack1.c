#include<stdio.h>
#define Stack_Max 10
typedef struct{
int top;
int data[Stack_Max];
}Stack;
void push(Stack *s, int item)
{
    if(s->top < Stack_Max){
        s->data[Stack_Max] = item;
        s->top++;
    }
    else printf("Stack is full !\n");
}
int pop(Stack *s)
{
    int item;
    if(s->top == 0){
        printf("Stack Is Empty !\n");
        return -1;
    }
    else{
        s->top--;
        item = s->data[s->top];
    }
    return item;
}
int main()
{
    Stack my_stack;
    int item;
    my_stack.top = 0;
    push(&my_stack,1);
    push(&my_stack,2);
    push(&my_stack,3);
    item = pop(&my_stack);
    printf("%d\n",item);
    item = pop(&my_stack);
    printf("%d\n",item);
    item = pop(&my_stack);
    printf("%d\n",item);
    return 0;
}
