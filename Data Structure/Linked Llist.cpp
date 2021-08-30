#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};

node* Head = NULL;

void create(int value){
	node* nptr = new node;
	nptr->data = value;
	nptr->next = NULL;
	if(Head==NULL)
		Head = nptr;
		else
			Head->next = nptr;
}

void addfirst(int value){
	if(Head==NULL || Head->next==NULL){	create(value); return; }
	else{
		node* nptr = new node;
		nptr->data = value;
		nptr->next = Head;
		Head = nptr;
	}
}

void addlast(int value){
	if(Head==NULL || Head->next==NULL){	create(value); return; }
	node *tptr = Head;
	while(tptr->next!=NULL) tptr = tptr->next;
	node* nptr = new node;
	nptr->data = value;
	nptr->next = NULL;
	tptr->next = nptr;
}

void removefirst(){
	if(Head==NULL) cout << "Nothing to remove,List is empty !\n";
	else if(Head->next==NULL){
		Head = NULL; cout << "Removed Sucessfully !\n";
	}
	else {
		Head=Head->next;
		cout << "Removed Sucessfully !\n";
	}
}

void removelast(){
	if(Head==NULL) cout << "Nothing to remove,List is empty !\n";
	else if(Head->next==NULL){
		Head = NULL; cout << "Removed Sucessfully !\n";
	}
	else{
		node* tptr = Head;
		while(tptr->next->next!=NULL) tptr = tptr->next;
		tptr->next = NULL;
		cout <<"Removed Sucessfully !\n";
	}
}

void removevalue(int value){
	if(Head==NULL) cout << "Nothing to remove,List is empty !\n";
	else if(Head->next==NULL){
		if(Head->data==value)
		 {	Head = Head->next; cout << "Value removed sucessfully !\n";  }
		else cout << "Value not found in the linked list !\n";
	}
	else{
		node* tptr = Head;
		while(tptr->next->next!=NULL && tptr->next->data!=value) {	tptr = tptr->next;    }
		if(tptr->next->data==value){
			if(tptr->next->next==NULL) {	tptr->next=NULL;    cout <<"Value Removed Sucessfully !\n"; }
			else{
				tptr->next = tptr->next->next;
				cout << "Value Removed Sucessfully !\n";
			}
		}
	}
}

void print(){
	node* x=Head;
	if(Head==NULL) cout << "List is empty,Nothing to print !\n";
	else{
		cout << "Elements in the linked list: \n";
	while(x!=NULL){
			cout << x->data << " -> ";
			x = x->next;
		}	
	cout << endl;
	}
}

int main()
{
	create(5);
	print();
	create(6);
	print();
	addfirst(4);
	print();
	addfirst(3);
	print();
	addlast(7);
	print();
	addlast(8);
	print();
	removefirst();
	print();
	removefirst();
	print();
	removefirst();
	print();
	removefirst();
	print();
	removefirst();
	print();
	removefirst();
	print();
	removefirst();
	print();
	create(5);
	print();
	create(6);
	print();
	addfirst(4);
	print();
	addfirst(3);
	print();
	addlast(7);
	print();
	addlast(8);
	print();
	removelast();
	print();
	removevalue(5);
	print();
	removelast();
	print();
	removelast();
	print();
	removelast();
	print();
	removelast();
	print();
	removelast();
	print();
	create(5);
	print();
	create(6);
	print();
	return 0;
}
