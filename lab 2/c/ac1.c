#include <stdio.h>

typedef struct {
 int id;
 char name[30];

} person;

void compact_version_ints(){

int integerVariable;
printf("Size of Integer Variable is %zu bytes\n", sizeof(integerVariable));

}

void initial_version_ints(){

  int integerVariable;
  size_t size; //size_t is an unsigned integer type. Can not be less than 0

  size = sizeof(integerVariable);
  printf("Size of Integer Variable is %zu bytes\n", size);

}

void array_test(){

  int array[] = {1,2,3,4,5,6,7,8,9};
  size_t test1 = sizeof(array);
  printf("%zu bytes\n", test1);

  int array2[1];
  size_t test2 = sizeof(array2);
  printf("%zu bytes\n", test2);
}

void struct_test(){

  person p1 = {1111, "Christopher Wales"};
  printf("ID: %d\nName: %s\n", p1.id, p1.name);
  printf("%zu %zu %zu \n", sizeof(p1.id), sizeof(p1.name), sizeof(p1));

}

int main ()
{
  struct_test();
  return 0;
}
