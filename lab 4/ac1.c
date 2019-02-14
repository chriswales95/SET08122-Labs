#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

int count(struct node *);
void display(struct node *);
void append(struct node **, int);
void prepend(struct node **, int);
void insertAfter(struct node *, int, int);
void delete(struct node **, int);

int main(){
  struct node *list;
  list = NULL;

  append(&list, 14);
  append(&list, 90);
  append(&list, 930);
  prepend(&list, 39);
  prepend(&list, 1000);
  insertAfter(list,3, 21);
  append(&list, 98765);
  delete(&list, 98765);
  append(&list, 111);
  printf("\nNo of elements in linked list = %d\n\n", count(list));
  display(list);
  printf("\n");


  return 0;
}

void delete(struct node ** list, int num){

  struct node *old, *temp;
  temp = *list;

  while(temp != NULL){
    if (temp -> data == num){
      if(temp == *list){
        *list = temp -> link;
      }
      else {
        old -> link = temp -> link;
        free(temp);
        return;
      }
    }
    else {
      old = temp;
      temp = temp -> link;
    }
  }
  printf("Element %d not found", num);
}

void insertAfter(struct node * list, int location, int num){

  struct node *temp, *r;
  int i;
  temp = list;

  for(i = 0; i <location; i++){
    temp = temp -> link;
    if (temp == NULL){
      printf("Length of list is %d but location supplied is %d\n", i, location);
      return;
    }
  }
  r = (struct node *) malloc(sizeof(struct node));
  r -> data = num;
  r -> link = temp -> link;
  temp -> link = r;
}

void prepend(struct node ** list, int num){
  struct node *temp;
  temp = (struct node *) malloc(sizeof(struct node));
  temp -> data = num;
  temp -> link = *list;
  *list = temp;

}

void append(struct node **list, int num){

  struct node *temp, *r;
  if(*list == NULL){

    temp = (struct node *) malloc(sizeof(struct node));
    temp -> data = num;
    temp -> link = NULL;
    *list = temp;
  } else {
    temp = *list;
    while(temp -> link != NULL){
      temp = temp -> link;
    }
    r = (struct node *) malloc(sizeof(struct node));
    r -> data = num;
    r -> link = NULL;
    temp -> link = r;
  }
}

void display(struct node * list){
  while(list != NULL){
    printf("%d ", list -> data);
    list = list -> link;
  }
  printf("\n");
}

int count(struct node * list){

  int count = 0;

  while (list != NULL){
    list = list -> link;
    count++;
  }
  return count;
}
