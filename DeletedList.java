import java.util.Scanner;

public class DeletedList {
    static Node head;
      private static class Node{
      private int data;
      private Node next;
      public Node(int data){
        this.data=data;
        this.next=null;

        }
    }
    void insert(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;
        while (temp.next != null)
            temp = temp.next;

        temp.next = newNode;
    }

     void deleteFront() {
        if (head != null) {
            head = head.next;
        }
    }

     void deleteMiddle(int key){
      
        if (head == null) {
            return;
        }
        if (head.data == key) {
             head = head.next;
              return; 
            }
        Node t = head;
        while (t.next != null && t.next.data != key){
            t = t.next;
        } 
        if (t.next != null) {
            t.next = t.next.next;
        }
    } 
     
    void deleteLast(){
         if (head == null || head.next == null) { 
            head = null;
          return; 
        }
        Node t = head;
        while (t.next.next != null) t = t.next;
        t.next = null;
    }
    public void display(){
        Node p=head;
        while(p!=null){
            System.out.print(p.data+" -> ");
            p=p.next;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);

        DeletedList list = new DeletedList();
        list.insert(10);
        list.insert(20);
        list.insert(30);
        list.insert(40);
        list.insert(50);
        list.insert(60);

        System.out.println("Original List:");
        list.display();

        list.deleteFront();  
        System.out.println("Deletion of First Node:");
        list.display();   

        System.out.println("Enter the Key which u want to delete:");
        int key=sc.nextInt();
        list.deleteMiddle(key);
        System.out.println("After Deletion at Middle:");
        list.display();

        list.deleteLast();
        System.out.println("Deletion at last:");
        list.display();
    }

}