import java.util.Arrays;

public class InsertionSort {
  public static void main(String[] args) {

    System.out.println(Arrays.toString(new int[] { 8, 4, 2, 1, 6 }));

  }

  static int[] insertionSort(int[] array) {
    for (int i = 1; i < array.length; i++) {
      int current = array[i];
      int j = i - 1;
      while (j >= 0 && array[j] > current) {
        array[j + 1] = array[j];
        j--;
      }
      array[j + 1] = current;
    }
    return array;
  }

}