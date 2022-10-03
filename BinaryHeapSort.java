//Java program to sort the elements using Heap sort
import java.util.Arrays;
public class HeapSort {
public void sort(int array[]) {
int size = array.length; //Assigning the length of array in a variable
// Create heap
for (int i = size / 2 - 1; i >= 0; i--)
heapify(array, size, i);
//Find the maximum element and replace it with the last element in the array
for (int i=size-1; i>=0; i--) {
int x = array[0];//largest element(It is available in the root)
array[0] = array[i];
array[i] = x;
// Recursively call heapify until a heap is formed
heapify(array, i, 0);
}
}
// Heapify function
void heapify(int array[], int SizeofHeap, int i) {
int largestelement = i; // Set largest element as root
int leftChild  = 2*i + 1; // index of left child = 2*i + 1
int rightChild  = 2*i + 2; //index of right child  = 2*i + 2
// left child is greater than root
if (leftChild  < SizeofHeap && array[leftChild ] > array[largestelement])
largestelement = leftChild ;
//right child is greater than largest
if (rightChild  < SizeofHeap && array[rightChild ] > array[largestelement])
largestelement = rightChild ;
// If largestelement is not root
if (largestelement != i) {
int temp = array[i];
array[i] = array[largestelement];
array[largestelement] = temp;
// Recursive call to  heapify the sub-tree
heapify(array, SizeofHeap, largestelement);
}
}
public static void main(String args[]) {
int array[] = {3,5,7,9,4,8,2};
System.out.println("Input array is: " + Arrays.toString(array));
HeapSort obj = new HeapSort();
obj.sort(array);
System.out.println("Sorted array is : " + Arrays.toString(array));
}
}
