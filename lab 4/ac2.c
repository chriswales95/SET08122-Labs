#include "stdio.h"
#include "stdlib.h"

struct node {
  int data;
  struct node *prev;
  struct node *next;
};

int count(struct node *);
void display(struct node *);
void append(struct node **, int);
void insert_after(struct node *, int, int);

int main(){
  struct node *list;
  list = NULL;

  printf("Number of elements in linked list : %d\n", count(list));
  display(list);

  append(&list, 14);
  append(&list, 30);
  append(&list, 25);
  append(&list, 42);
  append(&list, 17);
  insert_after(list, 2, 2);

  printf("Number of elements in linked list : %d\n", count(list));
  display(list);

  return 0;
}

int count(struct node *list)
{
  int count = 0;
  while(list != NULL) {
    list = list -> next; count ++;;
  }
  return count;
}

void display(struct node * list)
{
  while(list != NULL)
  {
    printf("%2d\t", list -> data);
    list = list -> next;
  }
  printf("\n");
}

void append(struct node **list, int num){

  struct node *temp, *current = *list;

  if (*list == NULL){
      *list = (struct node *) malloc(sizeof(struct node));
      (*list) -> prev = NULL;
      (*list) -> data = num;
      (*list) -> next = NULL;
  }
  else {
    while (current -> next != NULL){
      current = current -> next;
    }
    temp = (struct node *) malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> data = num;
    temp -> next = NULL;
    current -> next = temp;
  }
}

void insert_after(struct node * list, int location, int num)
{
    struct node *temp;
    int i;

    for(i=0; i<location; i++)
    {
        list = list -> next;
        if(list == NULL)
        {
            printf("Length is %d but supplied location is %d\n", i, location);
            return;
        }
    }
    list = list -> prev;
    temp = (struct node *) malloc (sizeof(struct node));

    temp -> data = num;
    temp -> prev = list;
    temp -> next = list -> next;
    temp -> next -> prev = temp;
    list -> next = temp;
}
