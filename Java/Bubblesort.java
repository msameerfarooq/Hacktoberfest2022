import java.util.*;

public class Bubblesort {
        static void bubbleSort(int[] arr) {
                int n = arr.length;
                int temp = 0;
                for (int i = 0; i < n; i++) {
                        for (int j = 1; j < (n - i); j++) {
                                if (arr[j - 1] > arr[j]) {

                                        temp = arr[j - 1];
                                        arr[j - 1] = arr[j];
                                        arr[j] = temp;
                                }

                        }
                }

        }

        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                int x = sc.nextInt();
                int arr[] = new int[x];
                for (int i = 0; i < x; i++) {
                        arr[i] = sc.nextInt();
                }
                bubbleSort(arr);

                System.out.println("Array after Bubble Sort");
                Arrays.stream(arr).forEach(System.out::println);
                sc.close();
        }
}