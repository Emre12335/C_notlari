/* pointerlar başka bir variable'ın adresini tutan özel değişkenlerdir.
değişkenin adressin içindeki değeri göstermesi için ise '*' kullanılır.
bir pointer tanımlanacağı zaman
pointer ın ne tipte bir değer göstereceği öncesinde belirtilmelidir.*/

/* syntax int *p1; or int* p1; */ //şeklinde yıldız herzaman solda olmak zorunda
#include <stdio.h>
int main(){
  /*ex 1(basic);*/
  int a;
  int* p1;/* tanımlandı */
  a = 5;
  p1 = &a; /* adresi variable a atandı */
  printf("ex1; %d\n",*p1); /* adres * işareti sayesinde değere dönüştü*/
  /*ex 2*/
  a = 6;
  printf("ex2; %d\n",*p1); /* variable ın değeri değişse de adres aynı kaldığı için pointer ın belirttiği değer de değişiyor.*/
  /*ex 3*/
  *p1 = 12;
  printf("ex3; %d\n",a);/*pointer ın belirttiğ değer değişince variable ın değeri de değişir.*/
  return 0;
}
