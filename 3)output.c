#include "stdio.h"
/* outputlar için de 3 farklı method var */
/* putchar() puts() ve printf() */
int main(){
  char a = 'b';
  char b[10] = "emre";
  int c = 5;
  printf("a = ");
  putchar(a);
  printf("\n");
  printf("b = ");
  puts(b);
  printf("c = %d", c);
  return 0;
}
/* atama özel karakterleri*/
/* %d = decimal
    %f = float
    %s = string
    %c = char
    %x = hexadecimal
    %lld = long long int
    %lf = double
    %u = unsigned int
  */

/*

  bazı özel karakterler için kurallar
  %% = %(yüzde işareti)
  \n = (alt satıra geç)
  \t = (tab at)
  \\ = \
  \b = (backspace)
  \' = '
  \" = "


*/

/*
  not sayının ,den önce ve sonra kaç rakam belirteceğini göstermek için
  %.2f şeklinde yazmak gerekiyor.yada %5.2f şeklinde
*/
