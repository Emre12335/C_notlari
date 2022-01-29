/* input almak için 3 tane fonksiyon var */
/* scanf(),gets(),fgets() */

/* scanf() fonksiyonu geçen derslerde görmüştük normalde & işareti ile birlikte
kullanılıyor.fakat string in ismi zaten adres belirttiği için kullanmaya gerek yok
scanf boşlukdan sonra çalışmadığı için gets() kullanmak daha mantıklı*/

/* gets() scanf deki boşluklu string yazmak için kullanılıyor fakat karakter sayısı
arrayinkinden fazla gelirse bufferoverflow error yiyoruz oyüzden fgets() kullanımı en çok tavsiye edilen kullanım*/

/*fgets() array dolduktan sonraki karakterleri kabul etmez ve error de vermez.*/

#include <stdio.h>
#include <string.h>
 int main(){
   char a1[100];
   char a2[100];
   char a3[10];
   /*printf("Enter something:");
   scanf("%s",a1);*/
   printf("Enter something2:");
   gets(a2);
   printf("%c",a2[4]);
   printf("Enter something3:");
   fgets(a3,10,stdin);


   return 0;
 }

 /*output olarak da puts() fputs() ve printf() kullanılıyor */

 /*kullanım şekilleri:
 puts(arrayname)
 fputs(arrayname,stdout)
 printf("%s",arrayname);
 */
