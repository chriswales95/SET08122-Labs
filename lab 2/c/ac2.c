#include <time.h>
#include <stdio.h>

void code(){
  for(int i=0; i<50; i++) {
   printf(".");
  }
  printf("\n");
}

int main(){

  clock_t t;
  printf("start: %d \n", (int) (t=clock()));
  code();
  printf("stop: %d \n", (int) (t=clock()-t));
  printf("Elapsed: %f seconds\n", (double) t / CLOCKS_PER_SEC);

  return 0;
}
