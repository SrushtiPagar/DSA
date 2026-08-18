import java.util.Scanner;

public class CountLinked {
    static Node head;
    private static class Node{
        private int data;
        private Node next;
        public Node(int data){
            this.data=data;
            this.next=null;

        }
    }
    public void insertAtBegin(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=newNode;
        }
        else{
            newNode.next=head;
            head=newNode;
        }
    }

    public void insertAtEnd(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=newNode;
        }
        else{
            Node current=head;
            while(current.next!=null){
                current=current.next;
            }
            current.next=newNode;
        }
    }
    public void display(){
        int count=0;
        Node p=head;
        
        while(p!=null){
            System.out.print(p.data+" -> ");
            p=p.next;
            count++;
        }
        System.out.println("NULL");
        System.out.println("Count of nodes is:"+count);
    }
    // public void search(int data){
    //         Node n=head;
    //         while (p!=null) {
                
    //         }
    // }
    public void middleinsert(int t,int data)
    {
        Node p = head;
        Node newNode = new Node(data);
        while(p.data != t)
        {
            p  = p.next;
        }
        newNode.next = p.next;
        p.next = newNode;
    }
    public static void main(String[] args) {
        CountLinked s=new CountLinked();
        // Node newNode1=new Node(10);
        // Node newNode2=new Node(20);
        // Node newNode3=new Node(30);
        // Node newNode4=new Node(40);
        // head=newNode1;
        // newNode1.next=newNode2;
        // newNode2.next=newNode3;
        // newNode3.next=newNode4;
        s.insertAtEnd(17);
        s.insertAtEnd(37);
        s.insertAtBegin(20);
        s.insertAtBegin(45);

        s.display();
        Scanner sc = new Scanner();

        System.out.println("Enter after where u want to insert: ");
        int target = sc.nextInt();

        s.middleinsert(target, data);


        
}
}