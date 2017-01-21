#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node *back;
	Node *top = NULL;
	Node *bottom = NULL;
};

Node *node, *top = NULL, *bottom = NULL;

void push(int x){
	node = new Node;
	node -> data = x;
	node -> next = NULL;
	
	if(top == NULL && bottom == NULL){
		node -> back = NULL;
		top = bottom = node;
	} else{
		bottom -> next = node;
		node -> back = bottom;
		bottom = node;
	}
}

bool pop(){
	if(top == NULL && bottom == NULL){
		return false;
	} else{
		int data;
		if(bottom -> back != NULL){
			node = bottom;
			bottom = bottom -> back;
			bottom -> next = NULL;
			data = node -> data;
			delete node;
		} else {
			data = top -> data;
			delete top, bottom, node;
			top = bottom = NULL;
		}
		cout << data << "Popped";
		return true;
	}
}

void display(){
	node = top;
	if(node == NULL)
		cout << "Stack is empty!";
	else{
		while(node != NULL){
			cout << node -> data << " - ";
			node = node -> next;
		}
	}	
}

int main(){
	do{
		int choice;
		cout << " -----Stack-----\n1. Push\n2. Pop\n3. Display \n4. Exit \n";
		cin >> choice;
		
		switch(choice){
			case 1:
				int x;
				cout << " Enter Value: ";
				cin >> x;
				push(x);
				break;
			case 2:
				if(!pop())
					cout << "Stack is empty";
				break;
			case 3:
				display();
				break;
			case 4:
			return 0;	
		}
	}while (true);
	return 0;
}
