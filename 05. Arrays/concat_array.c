#include <stdio.h>

int main() {
   int array[10];
   int even[5] = {0, 2, 4, 6, 8};
   int odd[5]  = {1, 3, 5, 7, 9};
   
   int loop, index, e_len, o_len;
   
   e_len = o_len = 5;
   
   index = 0;
 
   for(loop = 0; loop < e_len; loop++) {
      array[index] = even[loop];
      index++;
   }
 
   for(loop = 0; loop < o_len; loop++) {
      array[index] = odd[loop];
      index++;
   }

   printf("\nEven:");
   
   for(loop = 0; loop < e_len; loop++)
      printf(" %d", even[loop]);
   
   printf("\nOdd:");
   
   for(loop = 0; loop < o_len; loop++)
      printf(" %d", odd[loop]);

   printf("\nConcat: ");
   
   for(loop = 0; loop < 10; loop++)
      printf(" %d", array[loop]);

   return 0;
}
