/* for loop pythondaki for loopdan epey farklı çalışıyor. */
/*
  ne yazık ki pythondaki for loop gibi basit değil.
  3 kısımdan oluşuyor:
  1)initial value assignement(ilk değer ataması)
  2)condition(şart)
  3)increase or decrease(şart a yaklaşmak için atama yapma)
*/
/* syntax of for_loop
    for(initvalue;condition;increment){operations;}(1)
*/
/* for loop içine birden fazla initial value değer ve increase decrease alabilir(2)*/
/* initial value değeri istenirse atlanabilir.(3)*/
// initial value yu atlama bazen integer ın değeri değişmiş oluyor. boşuna hata ararsın
/* for looplar da while ve if ler gibi içiçe geçebilir.(4)*/
#include <stdio.h>
int main(){
  int i;
  int y;
  int times;
  int passed = 0;
  /*------------------------------*/
  for(i=0; i < 10; i+=1){
    printf("%d\n",i);
  }/* bu loop 10 defa çalışacak (1)*/
  /*-----------------------------*/
  for(times = 1,i = 0, y = 10;i != y;i += 1, y -= 1,times += 1){
    printf("%d\n",times);//(2)
  }
  /*-----------------------------*/
  for(;passed < 10;++passed){printf("paseed = %d\n",passed);}//(3)
  /*-----------------------*/
  for(times=1,i=0;i<10;i++){//(4)
    for(y=0;y<5;y++){
      printf("times = %d\n",times);
      times += 1;
    }
  }
  /*----------------------*/
  return 0;
}
