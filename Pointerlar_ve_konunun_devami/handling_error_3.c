#include <stdio.h>
#include <math.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[]){
  /* math kütüphasenindeki fonksiyonlar eğer ki içeriye girilen değer alınabilcek bir değer değilse ''EDOM''
  eğer fonksiyonun sonucu geri dönüş değerinin alabileceği değerden büyükse  ''ERANGE'' macro değeri errno ya eşitleniyor */
  /* Bu değerler errno kütüphanesinin içinde bu yüzden direk errno yu dahil ettik */

  //örnek
  float x = -5,y = 1000,z;
  z = sqrt(x);
  fprintf(stderr, "%s %d \n", strerror(errno),errno);
  errno = 0;
  z = exp(y);
  fprintf(stderr, "%s %d\n", strerror(errno),errno);
  return 0;
}
