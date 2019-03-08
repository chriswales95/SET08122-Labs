#include <stdio.h>
#define SIZE 10

void quicksort(int*, int, int);
int partition(int*, int, int);

int main(){

  int data[SIZE] = {9, 88, 79, 63, 7, 45, 17, 22, 1, 3};
  int i;

  printf("\nQuicksorting");
  printf("\nbefore sort:\n");

  for (int i = 0; i < SIZE; i++){
    printf("%d\t", data[i]);
  }
  printf("\n");
}

void quicksort(int data[], int lower, int upper){

}

int partition(int data[], int lower, int upper){
  
}
