#include <stdio.h>
#define SIZE 10

int main(){

  int array [SIZE] = {26, 34543, 17, 31, 13, 543, 456, 1, 0, 2};
  int idx, target, tmp;

  printf("Bubble sort \n");
  printf("Sorting:...");

  for(idx=0; idx<SIZE; idx++){
    printf("%d \t", array[idx]);
  }

  printf("\n");

  for(idx = 0; idx<SIZE-1; idx++){

    for(target=0; target < (SIZE-1)-idx; target++){
      if(array[target] > array[target+1]){
        tmp = array[target];
        array[target] = array[target+1];
        array[target+1] = tmp;
      }
    }
  }

  for(idx=0; idx<SIZE-1; idx++){
    for(target=idx+1; target<SIZE; target++){

    }
  }
  printf("\nSorted:\n");
  for(idx=0; idx<SIZE; idx++){
    printf("%d \t", array[idx]);
  }
  printf("\n");

  return 0;
}
