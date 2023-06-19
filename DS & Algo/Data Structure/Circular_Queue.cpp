#include<bits/stdc++.h>
using namespace std;
int size = 5,front = 0, rear = 0;
int *ara = new int [size];
void enqueue(int x){
	int next_rear = (rear+1)%size;
	if(next_rear == front) cout << "Queue Is Full,Enqueue Not Possible !\n";
	else {
		cout << "Sucessfully Enqueued !\n";
		ara[rear] = x;
		rear = next_rear;
	}
}
void dequeue(){
	if(rear == front){
		cout << "Dequeue Not Possible,Queue Is Empty !\n";
	}
	else {
		cout << "Sucessfully Dequeued !\n";
		front = (front+1)%size;
	}
}
void print()
{
	if(rear == front) cout << "Queue Is Empty,Nothing To Display !\n";
	else{
		cout << "Current Queue: \n";
		for(int i=front; i!= rear; i=(i+1)%size) cout << ara[i] << " ";
		cout << endl; 
	}
}

int main()
{
	enqueue(1);
	print();
	enqueue(2);
	print();
	enqueue(3);
	print();
	enqueue(4);
	print();
	enqueue(5);
	print();
	enqueue(6);
	print();
	dequeue();
	print();
	dequeue();
	print();
	dequeue();
	print();
	dequeue();
	print();
	dequeue();
	print();
	dequeue();
	print();
	return 0;
}
