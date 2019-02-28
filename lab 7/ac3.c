#include <stdio.h>
#define SIZE 10

int main(){

  int array[SIZE] = {26, 34543, 17, 31, 13, 543, 456, 1, 0, 2};
  int idx, cmp, shift, tmp;

  printf("Insertion sort\n");
  printf("Before sort");

  for(idx = 0; idx<SIZE; idx++){
    printf("%d\t", array[idx]);
  }
  printf("\n");

  for (cmp = 1; cmp < SIZE; cmp++){
    for (idx = 0; idx < cmp; idx++){

      if(array[idx] > array[cmp]){

        tmp = array[idx];
        array[idx] = array[cmp];

        for (shift = cmp; shift > idx; shift--){
          array[shift] = array[shift-1];
        }
        array[shift+1] = tmp;
      }
    }
  }
  printf("After sort");

  for(idx = 0; idx<SIZE; idx++){
    printf("%d\t", array[idx]);
  }
  printf("\n");

}
