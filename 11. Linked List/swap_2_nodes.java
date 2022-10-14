import java.io.*;
import java.util.*;

class LinkedListNode<T> {
    T data;
    LinkedListNode<T> next;
    
    public LinkedListNode(T data) {
        this.data = data;
    }
}

public class Main {
    
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
    public static LinkedListNode<Integer> takeInput() throws IOException {
        LinkedListNode<Integer> head = null, tail = null;

        String[] datas = br.readLine().trim().split("\\s");

        int i = 0;
        while(i < datas.length && !datas[i].equals("-1")) {
            int data = Integer.parseInt(datas[i]);
            LinkedListNode<Integer> newNode = new LinkedListNode<Integer>(data);
            if(head == null) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail.next = newNode;
                tail = newNode;
            }
            i += 1;
        }

        return head;
    }
    
    public static void print(LinkedListNode<Integer> head){
        while(head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        
        System.out.println();
    }
    
    public static LinkedListNode<Integer> swapNodes(LinkedListNode<Integer> head, int i, int j) {
    
        if (head == null || i == j)
            return head;
        
        LinkedListNode<Integer> curr2= head, curr1= head, p1= null, p2= null, temp= null;
        int ci= i, cj= j;
        
        i= Math.min(ci, cj);
        j= Math.max(ci, cj);
        j-= i;
            
        while (curr2 != null)
        {
            i--;
            if (i == 0)
            {
                p1= curr2;
                curr1= curr2.next;
            }        
            else if (i < 0)
        		j--;  
            
            if (j == 0){
                p2= curr2;
                curr2= curr2.next;
                temp= curr2.next;
                //System.out.println(curr1.data + ", " + curr2.data);
                if (p1 != null)
                	p1.next= curr2;
                else
                    head= curr2;
                
                p2.next= curr1;
                curr2.next= curr1.next;
                curr1.next= temp;
                break;
            }              
            curr2= curr2.next;
        }
        return head;
	  }

    public static void main(String[] args) throws NumberFormatException, IOException {
        
        int t = Integer.parseInt(br.readLine().trim());

        while (t > 0) {
            
            LinkedListNode<Integer> head = takeInput();
            String[] i_j = br.readLine().trim().split("\\s");

            int i = Integer.parseInt(i_j[0]);
            int j = Integer.parseInt(i_j[1]);

            LinkedListNode<Integer> newHead = swapNodes(head, i, j);
            print(newHead);
            
            t -= 1;
        }

    }
}
