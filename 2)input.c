#include "stdio.h"
/* input fonksiyonları çeşitlilik gösterir */
/* hepsi farklı şekilde yazılıyor */
/* scanf() getchar() get() */
int main(){
  printf("enter something:");
  char a = getchar();/* getchar() variable tanımlanırken yazılır */
  printf("you entered %c\n",a);
  printf("enter something:");
  char b[30]; /* getchar ve gets() aynı anda çalışmıyor.*/
  gets(b);
  printf("you entered %s \n",b);
  int c;
  printf("enter something:");
  scanf("%d",&c); /* scanf in çalışma mantığı diğerlerinkinden epey farklı*/
  /* ilişkilendirme operatörü(&) kullanılmak zorunda */
  /* string için bu kural geçerli değil çünkü kendisi bir pointer
  yani string için '&' ni kullanma.
  /* not scanf in içine \n sembolü girme ekran oynatamıyor. */
  /* scanf boşluktan sonra okumayı bırakır */
  printf("you entered %d \n",c);

  int d,e;
  printf("enter something:");
  scanf("%d %d",&d,&e);/* scanf e aynı anda birden fazla değer atanabilir.*/
  printf("you entered %d %d \n",d,e);
  return 0;
  /*scanf boşluktan sonrasını algılamaz yani tek bir değere işliyecekse
  bunun boşluksuz yazılması gerek boşluktan sonrası geçersiz olur yoksa*/
}
