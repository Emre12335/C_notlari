/* pointera ne değer atayacağını bilmioyrsan önce NULL  değerine atamalısın.*/
/* bunun sebebi bunu yapmadığımızda pointer random bir değere atanıyor.(1)*/
/* başka bir pointerın adresini belirten  pointerlar da yazılabilir.(2) */
#include <stdio.h>
int main(){
  int *p1;//(1)
  printf("p1 = %d\n",*p1);
  //int *p2 = NULL;
  //printf("p2 = %d\n",*p2); /*değer basılmıyor d boş kaldığı için */

  //(2)
  int new_var;
  int *p3 = NULL;
  int **p4 = NULL;
  int ***p5 = NULL;
  new_var = 3000;
  p3 = &new_var;
  p4 = &p3;
  p5 = &p4;
  printf("nv = %d\n", new_var);
  printf("p3 = %d\n", *p3);
  printf("p4 = %d\n", **p4);
  printf("p5 = %d\n", ***p5);
  return 0;
}
