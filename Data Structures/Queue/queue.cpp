#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100

class Queue{
    private:                                                    // definition of Queue Variables
        int q[MAX_SIZE];
        int current_size;
        int front;
        int back;
    public:                                                     //definition of Queue Methods
        Queue(){                                                //Constructor Function
            current_size = 0;
            front = -1;
            back = -1;
        }

        void enqueue(int value){
            if(back == MAX_SIZE - 1){                           //Checks if Queue is full
                cout << "Queue is Full..!!\n";
            }
            else{
                if(front == -1){                                //Checks if Queue is empty
                    front++;
                    back++;
                    current_size++;
                }
                else{
                    back++;
                    current_size++;
                }
                q[back] = value;
                cout << value << " added to Queue..!!\n";
            }
        }

        int dequeue(){
            int item;
            if(front == -1){                                    //Checks if Queue is empty
                cout << "Queue is Empty..!!\n";
                return -1;
            }
            else{
                item = q[0];
                if(back == 0){                                  //Checks if only one element is left
                    front = -1;
                    back = -1;
                    current_size = 0;
                }
                else{
                    for(int i=1; i<current_size; i++)           //Shifts elements to the left
                        q[i-1] = q[i];
                    back--;
                    current_size--;
                }
                cout << item << " is dequeued from Queue..!!\n";
                return item;
            }
        }

        void display(){
            for(int i=0; i<current_size; i++){
                cout << q[i] << " ";
            }
            cout << "\n";
        }
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}