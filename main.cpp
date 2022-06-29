#include <stdio.h>
#include<time.h>                  //  for time()
#include<stdlib.h>                // for rand()
int main()
{
    srand(time(NULL));                       //  generator nomor acak
   int array[100], n, c, d, position, swap;

   printf("Enter number of elements\n");
   scanf("%d", &n);

   printf("Masukan %d Angka\n", n);

   for ( c = 0 ; c < n ; c++ )
      array[c]=rand()%100;                 // menyimpan nomor acak antara 0 dan 100 (Perhatikan bahwa ini mungkin menghasilkan nomor yang sama lebih dari sekali)

   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;

      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != c )
      {
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
   }

   printf("Hasil Sorting :\n");

   for ( c = 0 ; c < n ; c++ )
      printf("[ %d ] ", array[c]);
    
   return 0;
}