#include "stdio.h"
#include "stdlib.h"
#define SIZE 10

void display(void);
void insert(int, int);
int hashCode(int);
struct DataItem *delete(struct DataItem*);
struct DataItem *search(int);

struct DataItem
{
  int data;
  int key;
};

struct DataItem *hashArray[SIZE];
struct DataItem *item;

int main(){
  insert(0,1);
  insert(1, 3);
  insert(11,11);
  display();

  item = search(1);
  if (item != NULL){
    printf("Found this: %d \n\n", item -> data );
  } else {
    printf("Did not find anything\n");
  }

  delete(item);
  display();
  return 0;
}

void display(void){
  int i;

  for(i=0; i <SIZE; i++){
    if (hashArray[i] != NULL){
      printf(" (%d, %d) ", hashArray[i] -> key, hashArray[i] -> data);
    } else {
      printf(" ~, ~ ");
    }
    printf("\n");
  }
}

int hashCode(int key){
  return key % SIZE;
}

void insert(int key, int data){
  struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
  item -> data = data;
  item -> key = key;

  int hashIndex = hashCode(key);
  while (hashArray[hashIndex] != NULL && hashArray[hashIndex] -> key != -1) {
    ++hashIndex;
    hashIndex %= SIZE;
  }
  hashArray[hashIndex] = item;
}

struct DataItem *search(int key)
{
  int hashIndex = hashCode(key);
  printf("%d\n", hashIndex);
  while (hashArray[hashIndex] != NULL) {
    if(hashArray[hashIndex] -> key == key){
      return hashArray[hashIndex];
    }
    ++hashIndex;
    hashIndex %= SIZE;
  }
  return NULL;
}

struct DataItem *delete(struct DataItem* item){

  int key = item -> key;
  int hashIndex = hashCode(key);

  while (hashArray[hashIndex] != NULL)
  {
    if(hashArray[hashIndex] -> key == key)
    {
      struct DataItem *temp = hashArray[hashIndex];
      hashArray[hashIndex] = NULL;
      return temp;
    }
    ++hashIndex;
    hashIndex %= SIZE;
  }
  return NULL;
}
