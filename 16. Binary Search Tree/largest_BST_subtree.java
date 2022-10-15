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
	
  public static int height(BinaryTreeNode<Integer> root) {
        if (root == null)
            return 0;        
        
        return 1 + Math.max(height(root.left), height(root.right));
	}
    
  public static void inOrder (BinaryTreeNode<Integer> root, ArrayList<Integer> bst){
        if (root == null)
            return;
        
        inOrder(root.left, bst);
        bst.add(root.data);
        inOrder(root.right, bst);
  }
    
	public static boolean isBST(BinaryTreeNode<Integer> root) {
        ArrayList<Integer> bst= new ArrayList<Integer>();
        inOrder(root, bst);
        Set<Integer> set= new LinkedHashSet<Integer>(bst);
        Collections.sort(bst);    
        
        if (set.size() < bst.size())
            return false;
        
        int i= 0;
        Iterator iterator = set.iterator();
        while (iterator.hasNext())
            if (!bst.get(i++).equals(iterator.next()))
                return false;         
        
        return true;
	}
    
	public static int largestBSTSubtree(BinaryTreeNode<Integer> root) {
        if (root == null)
            return 0;
        
        int lHeight= height(root.left);
        int rHeight= height(root.right);
        boolean BST= isBST(root);
        
        if (Math.max(lHeight, rHeight) == lHeight && BST)
            return lHeight+1;
        else if (Math.max(lHeight, rHeight) == rHeight && BST)
            return rHeight+1;
        else if (!BST)            
        	return Math.max(largestBSTSubtree(root.left), largestBSTSubtree(root.right));
        
        return 0;
	}
  
	public static void main(String[] args) throws IOException {
		BinaryTreeNode<Integer> root = takeInput();
		System.out.println(largestBSTSubtree(root));
	}

}
