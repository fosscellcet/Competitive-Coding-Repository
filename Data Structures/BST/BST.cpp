#include<iostream>
using namespace std;

class node{
	int key;
	node *left;
	node *right;

	public:
	node(int value){
		key = value;
		left = NULL;
		right = NULL;
	}

	void insert(int n){
		if(n < key){
			if(left == NULL){
				left = new node(n);
			}
			left->insert(n);
		}
		if(n > key){
			if(right == NULL){
				right = new node(n);
			}
			right->insert(n);
		}
	}


	bool search(int n){
		if(n == key){
			cout << "Found...!!" << endl;
			return 1;
		}
		else if(n > key){
			if(right == NULL){
				cout << "Not Found...!!" << endl;
				return 0;
			}
			else{
				return right->search(n);
			}
		}
		else{
			if(left == NULL){
				cout << "Not Found...!!" << endl;
			}
			else{
				return left->search(n);
			}
		}
	}

	void display(){
		if(left != NULL){
			left->display();
		}
                cout << key << "  " ;
		if(right != NULL){
			right->display();
		}
	}
};


int main(){
	node *root;
	root = new node(10);
	root->insert(3); 
	root->insert(5);
	root->insert(1);
	root->display();
	root->search(3);

	return 0;
}
