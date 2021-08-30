#include<bits/stdc++.h>
using namespace std;
int size = 5,front=0,rear=0;
int *ara = new int [size];
void enqueue(int x){
		if(rear == size)	cout << "Queue Is Full,Enqueue Not Possile !\n";
		else{
			cout << "Sucessfully Enqued !\n";
			ara[rear] = x;
			rear++;
		}
}

void dequeue(){
	if(front==rear)    cout << "Can't Dequeue, Queue Is Empty !\n";
	else {
		cout << "Sucessfully Dequeued !\n";
		front++;
	}
}

void print(){
	if(front==rear)	cout <<"Queue Is Empty, No Element To Show !\n";
 	else{
	for (int i=front; i<rear; i++) cout << ara[i] << " ";
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
