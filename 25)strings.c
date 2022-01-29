/*String c de sonu NULL('\0') ile biten bir char arraydir*/

/* char array: char name[total char]  şeklinde oluşturulur.*/
/* NULL sonunda olduğu için string oluştururken bunu düşünürken total_char sayısı en az 1 fazla yazılmalı*/

/* char oluşturma şekilleri:

char str1[5] = "emre"
char str1[] = "emre"
char str1[5] = {"e","m","r","e","\0"}
char str1[0] = {"e","m","r","e","\0"}

*/
/* string in ismi adres gibi davrandığı için pointer şeklinde yazılabilir. */
#include <stdio.h>

int main(){
  char a1[] = "emre";
  char a2[4] = "abc";
  printf("%c",*(a1+1));
  return 0;
}
/*Bazı fonksiyonlar

strlen() - string in uzunluğunu verir.
strcat() - iki string i birleştirir.
strcpy() - bir string i diğerine kopyalar.
strlwr() - bir string'deki bütün elemanları küçük yapar.
strupr() - bir string'deki bütün elemanları büyük yapar.
strrev() - bir stringi ters yapar.
strcmp() - iki string i kıyaslar.
*/
