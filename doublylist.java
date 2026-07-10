/*
 * Doubly Linked List
 * 
 * Insert at end 
 * Insert Middle 
 * Traverse Display
 * Count nodes
 * Search (Target)
 * Delete Front
 * Delete Middle 
 * Delete End
 */

public class doublylist {
    static Node head;
      private static class Node{
      private int data;
      private Node next;
      private Node prev;
      public Node(int data){
        this.data=data;
        this.next=null;
        this.prev = null;
        }
    }

        public void insertAtBegin(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=newNode;
        }
        else{
            newNode.next=head;
            head.prev=newNode;
            head = newNode;
        }
    }

    public void insertAtEnd(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=newNode;
        }
        else{
            Node current=head;
            while(current.next!=null)
            {
                current=current.next;
            }
            current.next=newNode;
        }
    }


    //  void deleteFront() {
    //     if (head != null) {
    //         head = head.next;
    //     }
    // }

    //  void deleteMiddle(int key){
      
    //     if (head == null) {
    //         return;
    //     }
    //     if (head.data == key) {
    //          head = head.next;
    //           return; 
    //         }
    //     Node t = head;
    //     while (t.next != null && t.next.data != key){
    //         t = t.next;
    //     } 
    //     if (t.next != null) {
    //         t.next = t.next.next;
    //     }
    // } 
     
    // void deleteLast(){
    //      if (head == null || head.next == null) { 
    //         head = null;
    //       return; 
    //     }
    //     Node t = head;
    //     while (t.next.next != null) t = t.next;
    //     t.next = null;
    // }
    public void display(){
        Node p=head;
        while(p!=null){
            System.out.print(p.data+" -> ");
            p=p.next;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {

        doublylist obj = new doublylist();
        obj.insertAtBegin(10);
        obj.insertAtBegin(20);
        obj.insertAtBegin(30);
        obj.insertAtBegin(40);
        obj.insertAtBegin(50);
        obj.insertAtBegin(60);
        obj.display();
        
    }

}

