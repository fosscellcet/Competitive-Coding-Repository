#include<iostream>
using namespace std;

class Stack{
	int top;
	int arr[100];

public:
	Stack(){
		top = 0;
	}

	void push(int x){
		if(top == 100){
			cout << "Stack is Full..!!" << endl;
		}
		else{
			arr[top] = x;
			top++;
			cout << x << " Pushed to Stack..!!" << endl;
		}
	}

	int pop(){
		if(top == 0){
			cout << "Stack is Empty..!!" << endl;
		}
		else{
			top--;
			int temp = arr[top];
			cout << temp << " is Popped..!!" << endl;
			return temp;
		}
	}

	void display(){
		for(int i = 0; i < top; i++){
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
