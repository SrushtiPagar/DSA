#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    // Add node at end
    void insertAtEnd(Node*& head, int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Display the list
    void display(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;  // Here "NULL" is just text to show end of list
    }

    // Reverse the linked list
    void reverse(Node*& head) 
	{
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }
    
     Node* add(Node* l1, Node* l2) {
        Node* dummyHead = new Node(0);  // Dummy head
        Node* curr = dummyHead;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            int x = (l1 != NULL) ? l1->data : 0;
            int y = (l2 != NULL) ? l2->data : 0;
            int sum = x + y + carry;

            carry = sum / 10;
            int digit = sum % 10;

            curr->next = new Node(digit);
            curr = curr->next;

            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }

        return dummyHead->next;
    }
//    
//    void deletionstart()
//    {
//    	if(head != NULL)
//    	{
//    	head = head->next;
//    	}
//	}
};

int main()
{
    LinkedList list;
	Node* head1 = NULL; // first linked list
    Node* head2 = NULL; // second linked list
    list.insertAtEnd(head1,2);
    list.insertAtEnd(head1,4);
    list.insertAtEnd(head1,3);
    list.display(head1);
    cout<<endl;
    list.reverse(head1);
    cout << endl;
    list.insertAtEnd(head2,5);
    list.insertAtEnd(head2,6);
    list.insertAtEnd(head2,4);
    list.display(head2);
    cout<<endl;
    list.reverse(head2);
    cout << endl;
    cout << "List 1: ";
    list.display(l1);

    cout << "List 2: ";
    list.display(l2);

    Node* result = list.add(l1, l2);
    cout << "Sum List: ";
    list.display(result);
    list.add(R1,R2);
//    list.reverse();
//    list.display("After Reverse:");
//	list.display("After Deletion at start:");
//	list.deletionstart();
    return 0;
}

























