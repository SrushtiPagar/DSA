#include <iostream>
using namespace std;

class Stack {
private:
    char* stack;
    int top;
    int size;

public:
    // Constructor
    Stack(int size) {
        this->size = size;
        stack = new char[size];
        top = -1;
    }

    // Push operation
    void push(int value) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            stack[++top] = value;
            cout << "Pushed: " << value << endl;
        }
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            cout << "Popped: " << stack[top--] << endl;
        }
    }


    // Display stack elements
    void display() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }

    // Destructor to free allocated memory
    ~Stack() {
        delete[] stack;
    }
};

// Main function
int main() {
    Stack s(6);  // Creating stack of size 5

//    s.push('a');
//    s.push('b');
//    s.push('b');
//    s.push('a');
//    s.push('c');
//	s.push('a');
//    s.display();


	char arr[6] = {'a','b','b','a','c','a'};
	for(int i = 0;i<6;i++)
	{
	cout<<arr[i]<<"  ";
	}
	cout<<endl;
	int size = 6;
	char stack[size];
	
	for(int i = 0;i<6 ; i++)
	{
		s.push(i)=arr[i];
	}
//    s.display();

}











