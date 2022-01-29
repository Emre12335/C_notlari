#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  int * p = (int*)malloc(n*sizeof(int));
  for (size_t i = 0; i < n; i++){
    p[i] = i;
  }
  p = (int*)realloc(p,0);
  /* boyuta sıfır yazmak free ye eşdeğer */
  p = (int*)realloc(NULL,n*sizeof(int))
  /* adrese NULL yazmak ise malloc a eşdeğer */
  for (size_t i = 0; i < n*2; i++){
    printf("%d ",p[i]);
  }
  return 0;
}
