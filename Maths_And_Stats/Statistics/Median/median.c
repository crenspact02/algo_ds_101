//Finding median of a given series through the medium of sort
//author : @crenspact02

#include <stdio.h>
#include <conio.h>

void swap(int *x,int *y) {
   int z;
   
   z=*x; 
   *x=*y; 
   *y=z;
}

void sort(int s[],int n) {  // n is number of items to be sorted in ascending order and s is the array carrying all the numbers.
   
   int i,j,temp;

   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(s[j] > s[j+1])
            swap(&s[j],&s[j+1]);
      }
   }
}

int main() {
   int s[] = {10,20,30,40,50,60,70};
   int n = 7;
   int sum, i;

   sort(s,n);   // sort function called
   
   n = (n+1) / 2 - 1;      // -1 signifies the indexing of array in C. which starts from 0

   printf("The required median of the given array is as follows = %d ", s[n]);

   return 0;
}