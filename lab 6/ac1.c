#include "stdio.h"
#include "time.h"
#define SIZE 50
void search(int *array, int num){
  int idx;

  for(idx=1; idx<=SIZE; idx++){
    if(array[idx] == num){
      printf("%d found in position %d\n", num, idx+1);
      return;
    }
  }
  if (idx == SIZE)
    printf("%d not found\n", num);
}

int main(){
  int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
  int *p = array;

  clock_t t;
  printf("start: %d \n", (int) (t=clock()));
  search(p, SIZE);
  printf("stop: %d \n", (int) (t=clock()-t));
  printf("Elapsed: %f seconds\n", (double) t / CLOCKS_PER_SEC);

  return 0;
}
