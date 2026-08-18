//#include<iostream>
//using namespace std;
//
//class sample
//{
//	static Node head;
//	private:
//		int data;
//	private:
//		Node next;
//	public Node(int data)
//	{
//		this.data=data;
//		this.next=null;
//	}
//	public void display()
//	{
//		int count = 0;
//		Node p=head;
//		while(p!=null)
//		{
//			cout<<p.data+" --> ";
//			p=p.next;
//			count++;
//		}
//		cout<<"NULL";
//		cout<<count;
//	}
//};
//int main()
//{
//	sample obj = new sample();
//	Node newNode1 = new Node(10);
//	Node newNode2 = new Node(20);
//	Node newNode3 = new Node(30);
//	Node newNode4 = new Node(40);
//	
//	newNode1.next = newNode2;
//	newNode2.next = newNode3;
//	newNode3.next = newNode4;
//	
//}


#include<iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int d) {
        data = d;
        next = nullptr;
    }
};

// Sample class to hold head and display logic
class sample {
    static Node* head;  // static head pointer

public:
    // Static method to set head (optional, could be done directly)
    static void setHead(Node* h) {
        head = h;
    }

    // Display function
    void display() {
        Node* p = head;
        int count = 0;
        while (p != nullptr) {
            cout << p->data << " --> ";
            p = p->next;
            count++;
        }
        cout << "NULL" << endl;
        cout << "Total nodes: " << count << endl;
    }
};

// Initialize static member
Node* sample::head = nullptr;

int main() {
    // Create nodes
    Node* newNode1 = new Node(10);
    Node* newNode2 = new Node(20);
    Node* newNode3 = new Node(30);
    Node* newNode4 = new Node(40);

    // Link nodes
    newNode1->next = newNode2;
    newNode2->next = newNode3;
    newNode3->next = newNode4;

    // Set head
    sample::setHead(newNode1);

    // Create sample object and display list
    sample obj;
    obj.display();

    return 0;
}

























