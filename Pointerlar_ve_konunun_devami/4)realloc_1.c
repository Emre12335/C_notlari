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
  p = (int*)realloc(p,(n/2)*sizeof(int));
  // realloc ataması yapılmış bir alanı artırmak yada azaltmak için kullanılabilir
  // alan arttırılacak ise ardışık yer varsa direk eklenir ardışık yer yoksa adresi değiştirir
  // alanı küçülttüğünde adreste herhangi bir değişim olmaz.
  for (size_t i = 0; i < n; i++) {
    printf("%d ",p[i]);
  }
  return 0;
}
