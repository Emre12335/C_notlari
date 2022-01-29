/*
  operators in c:
  + ==> toplama
  - ==> çıkarma
  * ==> çarpma
  / ==> bölme (sayılardan herhangi biri virgüllü ise sonuç reel sayıdır
  aksi takdirde 2 side integer olduğunda kalanlı bölme yapar makine)
  % ==> kalan bulma
*/
/*
  operasyonların sırasını () ile ayarlayabilirsin.
*/

/*
  relational operators:
  '<'  ==> küçüktür
  '<='  ==> küçük eşittir
  '>'  ==> büyüktür
  '>='  ==> büyük eşittir
  '=='  ==> eşittir
  '!=' ==> eşit değildir

/*
  assignmenet operators:
  x = x + 1 demek yerine
  x += 1 demek aynı şey 2side x in değerini yükseltir.

  += ==>  ekleme
  -= ==> çıkarma
  *= ==> çarpma
  /= ==> bölme
  %= ==> kalanlı bölme

  not işlem sırası her zaman önce eşitliğin sağ tarafı yapılıp x e sonra atama
  gerçekleştirilir.
*/

/*
  sağa kısma variable girildiğinde vairable ın değeri değişmez.
*/

/* !!!!!!!!!!!!!!
  c de 1 artırmak ve azaltmak için özel bir atama operatorü geliştirilmiş
  a++ ile a += 1  'a' nın değerinin aynı şekilde değiştirir.
  a-- ile a -= 1  'a' nın değerinin aynı şekilde değiştirir.
*/

/*
 ++a şeklinde de yazılabilir. ++ ların yeri işlem önceliğini belirliyor.
 prefix hali önce variable ı değiştirir ardından if-for-while gibi döngüdeki değerle karşılaştırılır
 postfix hali önce if-for-while gibi döngüdeki değerle karşılaştırır sonra variable ı değiştirir.
 aşağıda örneği var.
*/

#include <stdio.h>
int main() {
  int a = 2;
  int b;
  if(3 == a++){printf("emre\n");}
  printf("a = %d\n",a);
  if(4 == ++a){printf("pinar\n");}
  printf("a = %d\n",a);
  b = a++;
  printf("a = %d\n",a);
  printf("b = %d\n",b);
  return 0;
}
