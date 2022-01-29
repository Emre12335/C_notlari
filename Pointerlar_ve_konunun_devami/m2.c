#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]){
  int * p = (int*)malloc(sizeof(int));
  *p = 4;
  printf("%d\n",*p);
  return 0;
}
