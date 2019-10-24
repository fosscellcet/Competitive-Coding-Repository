#include<iostream>
using namespace std;

class Stack{
	int top;
	int size;
	int arr[100];

public:
	Stack(){
		top = 0;
		size = 0;
	}

	void push(int x){
		if(size == 100){
			cout << "Stack is Full..!!" << endl;
		}
		else{
			arr[top] = x;
			top++;
			size++;
			cout << x << " Pushed to Stack..!!" << endl;
		}
	}

	int pop(){
		if(size == 0){
			cout << "Stack is Empty..!!" << endl;
		}
		else{
			top--;
			size--;
			int temp = arr[top];
			cout << temp << " is Popped..!!" << endl;
			return temp;
		}
	}

	void display(){
		for(int i = 0; i < size; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.display();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.display();
	return 0;
}
