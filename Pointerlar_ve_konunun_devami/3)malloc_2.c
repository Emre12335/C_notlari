#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  int * p = (int*)malloc(n*sizeof(int));
  for (size_t i = 0; i < n; i++) {
    printf("%d ",p[i]);
  }
  return 0;
}
