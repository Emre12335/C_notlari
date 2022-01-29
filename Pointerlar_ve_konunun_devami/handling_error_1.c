/* C exception handling i desteklemez ama yine de hataları kontrol edebiliriz */
/* örneğin yanlış bir değişken girildiğinde bunu kontrol edip çıkabiliriz */
/* exit kullanabilirsin */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int x = 10;
  int y = 0;
  if(y != 0){printf("x / y = %d\n",x/y);}
  else{
    printf("Divisor is 0, Program exiting");
    exit(EXIT_FAILURE);
    /* exit in içine rakam yazılabilir yada makrolar kullanılabilir. */
    /* EXIT_SUCCES veya EXIT_FAILURE kullanılabilir. */
    /* -1 hata durumu için 0 da sorunsuz durum için kullanılabilir */
  }
  return 0;
}
