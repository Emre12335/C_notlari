// c düşük seviye bir programlama dilidir.
// bellekteki dosyaların adreslerine ulaşarak değişiklikler yapılabilir.
// geçen derste gördüğümüz scanf fonksiyonu & operatorünü kullanmasının sebebi
// aslında '&' değişkenin adresini belirtmek için kullanılıyor.
// scanf addressi verilen yere input'u bırakıyor.

#include<stdio.h>
void name(int num);
int main(){
  int i;
  printf("The address of i is %x\n",&i);
  name(i);
  printf("The address of i is %x\n",&i);
  name(i);
  return 0;
}
void name(int num){
  printf("The address of k is %x\n",&num);
}
/* %x address bastırılırken kullanılan printf statement ı */
/* görüldüğü gibi aynı variable ın addressi fonksiyondan fonksiyona değişiklik gösteriyor
ama aynı fonksiyonun içindeyken aynı integer'ın addresleri aynı oluyor.*/
