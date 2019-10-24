public class Stack{

    // Definition of Stack class 

    int current_size;
    int max_size;
    int top;
    int s[];

    public Stack(int size){
        this.max_size = size;
        this.current_size = 0;
        this.top = 0;
        this.s = new int [size];
    }

    public void push(int value){
        if(this.current_size == this.max_size)
            System.out.println("Stack is full..!!");
        else{
            this.s[top] = value;
            System.out.println(value + " Pushed to Stack..!!");
            top++;
            current_size++;
        }
    }

    public int pop(){
        if(this.current_size == 0){
            System.out.println("Stack is Empty..!!");
            return -1;
        }
        else{
            int item;
            this.top--;
            this.current_size--;
            item = this.s[top];
            System.out.println(item + " is Popped..!!");
            return item;
        }
    }


    public void display(){
     for(int i=0; i<this.current_size; i++){
        System.out.print(this.s[i] + " ");
     }
     System.out.println();
    }

    // Main Function
    public static void main(String args[]) {
        Stack s = new Stack(100);  // Stack of max_size 100 is created
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
    }
}