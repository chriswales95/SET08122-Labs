#include <stdio.h>
#define SIZE 10

int main(){

  int array[SIZE] = {26, 34543, 17, 31, 13, 543, 456, 1, 0, 2};
  int idx, target, temp;

  printf("Selection Sort\n");
  printf("Before sort:\n");

  for(idx=0; idx<SIZE; idx++){
    printf("%d\t", array[idx]);
  }
  printf("\n");

  for(idx = 0; idx < SIZE-1; idx++){
    for(target = idx+1; target < SIZE; target++){
      if(array[idx] > array[target]){
        temp = array[idx];
        array[idx] = array[target];
        array[target] = temp;
      }
    }
  }
  printf("Sorted:\n");
  for(idx=0; idx<SIZE; idx++){
    printf("%d\t", array[idx]);
  }
  printf("\n");
}
