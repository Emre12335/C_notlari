/* tıpkı pythonda olduğu gibi c'de de fonksiyonların içindeki değişkenler localdir
local değişen demek sadece fonksiyonun içinde var olan dışında var olmayan değişken demektir. */

/* c de global keyword yoktur main in içindeki değişkenler dahil fonksiyonların içindeki değişkenker localdir
global değişken açmak için fonksiyonun dışında en tepeye değişken açılır bu sayede bu değişken bütün fonksiyonlar tarafından
değiştirilebilir olur. */

/* variable ı direk adıyla çağırmak gerek aksi takdirde sonuç değişmiyor. */

//PART 2
/* scope olarak global ve local olmak üzere 2'ye ayrılsa da local'ın kendi içinde 2 farklı türü var
  static ve normal olmak üzere 2 farklı türü var normalde local değişkenler hafızada kaydedilmez ve fonksiyon oynatılırken
  değer alır static keyword sayesinde ise  verilen değer hafızada kaydedilir ve bir daha ki sefere oynatıldığında değer atama
  işlemi yapılmadan direk işlemlere geçilir*///(Özel Durum)

#include <stdio.h>
int x = 5;
int plus_one();
int plus_one_alt(int num);
int static_change();
int main(){
  plus_one();
  printf("%d\n",x);
  plus_one_alt(x);
  printf("%d\n",x);
  /*---------*/
  /* (Özel Durum) */
  printf("y = %d\n",static_change());
  printf("y = %d\n",static_change());

  return 0;
}
int plus_one(){x += 1;return x;}// ismiyle çağırdım değer değişti.
int plus_one_alt(int num){num += 1;return num;}//  ismiyle çağırmadım değer değişmedi
int static_change(){static int y = 0; y += 1; return y;}
