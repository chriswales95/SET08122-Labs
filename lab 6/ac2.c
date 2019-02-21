#include "stdio.h"
#include "time.h"

#define SIZE 50

int main() {

  int array[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
  int mid = 0, lower = 0, upper = SIZE-1, key = 0, found =0;

  printf("Enter a number to search for: ");
  scanf("%d", &key);
  clock_t t;
  printf("start: %d \n", (int) (t=clock()));

  for(mid=(lower+upper)/2; lower <= upper; mid=(lower+upper)/2){

    if(array[mid]==key){
      printf("your num is at position %d of array\n", mid+1);
      found = 1;
      break;
    }
    if(array[mid] > key){
      upper = mid -1;
    } else {
      lower = mid+1;
    }
  }
  if(!found){
    printf("%d is not in array\n", key);
  }
  printf("stop: %d \n", (int) (t=clock()-t));
  printf("Elapsed: %f seconds\n", (double) t / CLOCKS_PER_SEC);
  return 0;
}
