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

int main(){
  struct node *list;
  list = NULL;

  printf("No of elements in linked list = %d\n", count(list));

  append(&list, 14);
  printf("No of elements in linked list = %d\n", count(list));
  display(list);

  return 0;
}

void prepend(struct node ** list, int num){

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
