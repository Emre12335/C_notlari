#include <stdio.h>
/*   2 pointerların fonksiyonun içinde argüman olması ve içine pointer girilmesi   */
void value_changer(int* p1);
int main(){
  int* plocal = NULL,a = 2;
  plocal = &a;
  printf("a = %d\n",a);
  value_changer(plocal);
  printf("a = %d\n",a);
  return 0;
}
void value_changer(int* p1){
      *p1 += 2;
}

/*21 ve 22 arasındaki temel fark 22 de dışarıda da pointer açmamız gerekiyor;
fakat 21 de pointer açmadan direk istediğimiz elemanın location'u giriliyor.*/
