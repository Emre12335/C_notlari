
/* aynı pythondaki gibi c'de de kendi fonksiyonlarımızı yapabiliriz. */
/* ana kodumuzun çalıştığı main de bir fonksiyondur. */
/* fonksiyonlar belirli işlemler gerçekleştiren küçük algoritmalardır.
   kullanım sebepleri:
   1)tekrarı önler bir kere yazdığınzı bir fonksiyonu çağırarak yazcağınız kodu kısaltıp vakit kazanırsınız.
   2)programı daha düzenli hale getirir.
   3)programı daha okunaklı yapar./*

pythondan farklı olarak c de fonksiyon tanımlanacağı zaman çıktı değerinin ne tür olacağını da
ekrana yazdırmamız gerek ayrıca fonksiyon tek bir tür çıktı verebilir.yani python da yaptığımız gibi
canımzı ne isterse fonksiyonun  onu döndürmesini sağlayamayız.
*//*
pythondan farklı olarak yazacağımız fonksiyonlara tepede declaration yapmak daha düzenli bir görüntü
sunacaktır bu sayede fonksiyonları main'in altına da yazabiliriz.(1)*/

/*syntax of functions:
      '''return_type function_name(parameters);{operations and return(except void);}''' */

/*declaration yapmak için sadece ; e kadar olan kısmı yazıyoruz.normalde declaration haric ';' yok(1)*/
/* fonksiyon eğer herhangi bir şey döndermeyecekse 'void' keyword kullanılır (2)*/
/*declaration zorunlu değildir fakat bu durumda fonksiyonlar

/*declaration(1)*/
int square(int number);
/*------------*/
void alprintf();//(2)
#include <stdio.h>
int main(){
  int x;
  x = 15;
  x = square(x);
  printf("%d\n",x);
  alprintf();
  return 0;
}
/*square function*/
int square(int number){return number*number;}
void alprintf(){printf("merhaba\n");}//(2)
