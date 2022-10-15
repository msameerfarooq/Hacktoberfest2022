import java.io.*;
import java.util.*;

class QueueEmptyException extends Exception {
}

class QueueUsingLL<T> {

	class Node<T> {
		T data;
		Node<T> next;

		Node(T data) {
			this.data = data;
		}
	}

	private Node<T> head;
	private Node<T> tail;
	private int size = 0;

	public int size() {
		return size;
	}

	public boolean isEmpty() {
		if (size == 0) {
			return true;
		}
		return false;
	}

	public T front() throws QueueEmptyException {
		if (size == 0) {
			QueueEmptyException e = new QueueEmptyException();
			throw e;
		}

		return head.data;
	}

	public void enqueue(T element) {
		Node<T> newNode = new Node<T>(element);

		if (head == null) {
			head = newNode;
			tail = newNode;
		} else {
			tail.next = newNode;
			tail = newNode;
		}

		size++;
	}

	public T dequeue() throws QueueEmptyException {
		if (head == null) {
			QueueEmptyException e = new QueueEmptyException();
			throw e;
		}
		if (head == tail) {
			tail = null;
		}
		T temp = head.data;
		head = head.next;
		size--;
		return temp;
	}
}

class BinaryTreeNode<T> {
	T data;
	BinaryTreeNode<T> left;
	BinaryTreeNode<T> right;

	public BinaryTreeNode(T data) {
		this.data = data;
	}
}

public class Main {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringTokenizer st;

	public static BinaryTreeNode<Integer> takeInput() throws IOException {
		st = new StringTokenizer(br.readLine());
		int rootData = Integer.parseInt(st.nextToken());
		if (rootData == -1) {
			return null;
		}
		QueueUsingLL<BinaryTreeNode<Integer>> pendingNodes = new QueueUsingLL<BinaryTreeNode<Integer>>();
		BinaryTreeNode<Integer> root = new BinaryTreeNode<Integer>(rootData);
		pendingNodes.enqueue(root);

		while (!pendingNodes.isEmpty()) {
			BinaryTreeNode<Integer> currentNode;
			try {
				currentNode = pendingNodes.dequeue();
			} catch (QueueEmptyException e) {
				return null;
			}
			int leftChildData = Integer.parseInt(st.nextToken());
			if (leftChildData != -1) {
				BinaryTreeNode<Integer> leftChild = new BinaryTreeNode<Integer>(leftChildData);
				currentNode.left = leftChild;
				pendingNodes.enqueue(leftChild);
			}
			int rightChildData = Integer.parseInt(st.nextToken());
			if (rightChildData != -1) {
				BinaryTreeNode<Integer> rightChild = new BinaryTreeNode<Integer>(rightChildData);
				currentNode.right = rightChild;
				pendingNodes.enqueue(rightChild);
			}
		}
		return root;
	}
	
  public static void inOrder (BinaryTreeNode<Integer> root, ArrayList<Integer> arr){
        if (root == null)
            return;
        
        inOrder (root.left, arr);
        arr.add(root.data);
        inOrder (root.right, arr);
    }
    
    public static int binSearch(ArrayList<Integer> arr, int l, int e, int x){
        int mid;        
        while (l <= e)
        {
            mid= l + (e-l)/2;
            if (arr.get(mid) == x)
                return mid;
            else if (arr.get(mid) < x)
                l= mid + 1;
            else
                e= mid - 1;
        }
        return -1;
    }
    
	public static void printNodesSumToS(BinaryTreeNode<Integer> root, int s) {
        if (root == null)
            return;
        
        ArrayList<Integer> arr= new ArrayList<Integer>();
        inOrder(root, arr);
        int e, i;
        
        for (i= 0 ; i < arr.size(); i++)
        {
            e= binSearch(arr, i+1, arr.size()-1, s-arr.get(i));
            if (e >= 0)
                System.out.println (arr.get(i) + " " + arr.get(e));
        }
	}
  
	public static void main(String[] args) throws IOException {
		BinaryTreeNode<Integer> root = takeInput();
		int s = Integer.parseInt(br.readLine());
		printNodesSumToS(root,s);
	}

}
