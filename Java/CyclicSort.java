import java.util.Arrays;

public class CyclicSort {

    
    public static void cyclicSort ( int [] arr ){

       
        int index = 0;

      
        while( index < arr.length ){

            int value = arr[index];

                if( value-1 == index ) {
                ++index;
            }

            
            else {
                int temp = arr[index];
                arr[index] = arr[value-1];
                arr[value-1] = temp;
            }
            
        }
        
    }

    public static void main(String[] args) {
        int [] arr = { 4, 1, 7, 5, 2, 6, 3 };
        System.out.println("Unsorted Array: " + Arrays.toString(arr) );
        cyclicSort(arr);
        System.out.println("Sorted Array: " + Arrays.toString(arr) );
    }
}