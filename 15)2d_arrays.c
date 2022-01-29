/* array içeren arrayler c de yapılabilir. */
/* 3 boyutlu 4 boyutlu hepsi mümkün aşağıdaki gibi yapılarak yapılablilir.*/
#include <stdio.h>
/* 2d arraylerin yazımı */
int main(){
  int new_a[2][3] = {{1,2,3},{4,5,6}};
  printf("%d\n",new_a[1][1]);
  int k,l;
  for(k = 0;k<2;k++){
    for(l = 0;l<3;l++){
      printf("%d-",new_a[k][l]);
    }
  printf("\n");
  }
  return 0;
}
