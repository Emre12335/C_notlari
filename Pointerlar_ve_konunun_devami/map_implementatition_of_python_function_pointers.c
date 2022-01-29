#include <stdio.h>
int map(int (*p)(int), int array[],int size){
  for (int i = 0; i < size; i++) {
      array[i] = p(array[i]);
  }
  return 0;
}
void print_array(int array[],int size){
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}
int square(int x){return x*x;}
int multiply_by_two(int x){return x*2;}
int multiply_by_three(int x){return x*3;}
int main(int argc, char  *argv[]){
  int a1[10] = {1,2,3,4,5,6,7,8,9,10};
  map(square,a1,10);
  print_array(a1,10);
  printf("\n");
  map(multiply_by_two,a1,10);
  print_array(a1,10);
  printf("\n");
  map(multiply_by_three,a1,10);
  print_array(a1,10);
  printf("\n");
  return 0;
}
