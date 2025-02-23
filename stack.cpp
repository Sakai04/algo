#include <iostream>
class Stack {
private:
    int size;
    int capacity;
public:
    int top;
    int *arr;

    Stack() {
        capacity = 5;
        arr = new int[capacity];
        top = -1;     
        size = 0;
    }

    ~Stack(){

    }

    void push(int data) {
        if (size == capacity) {
            extend();
        }
        top = top + 1;
        size = size + 1;
        arr[top] = data;
    }

    
    int pop() {
        if(getIsempty()){
            printf("Stack is empty\n");
            return 0; 
        }
        int res = arr[top];
        top = top - 1;
        size = size - 1;
        return res;
    }

    bool getIsempty(){
        return size == 0;
    }

    bool getIsFull(){
        return size == capacity;
    }

    int peek(){
        return arr[top];
    }

    void extend(){
        printf("extend start\n");
        int old = capacity;
        capacity = capacity * 2;
        int *copy = new int[capacity];
        for (int i = 0; i < old; i++){
            copy[i] = arr[i];
        }
        arr = copy;
        copy = NULL;
    }

    int getCapacity(){
        return capacity;
    }

    int getSize(){
        return size;
    }

    bool empty(){
        return getIsempty();
    }
    
    void print_stack(){
        for(int i = 0; i < arr[i]; i++){
            printf("%d\n", arr[i]);
        }
    }
    
};

int main(){
    Stack s;
    s.push(10);
    printf("pop: %d\n", s.pop());
    
    for (int i = 1; i <=10; i++){
        s.push(i);
        printf("capacity: %d, size: %d, peek: %d\n",s.getCapacity(), s.getSize(), s.peek());
        s.print_stack();
    }
    
    while (!s.empty()){
        printf("pop: %d\n", s.pop());
    }
    return 0;
}