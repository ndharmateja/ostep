#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void display(int *arr) {
  int i = 0;
  printf("[[");
  for(i=0; i<SIZE; i++) {
     printf("%d ", arr[i]);
  }
  printf("]]\n");
}

int main() {
  int i = 0;
  int *array = (int *) malloc(sizeof(int)*SIZE);

  for(i=0; i<SIZE; i++) {
     array[i] = i;
  }
  display(array);
  return 0;
}
