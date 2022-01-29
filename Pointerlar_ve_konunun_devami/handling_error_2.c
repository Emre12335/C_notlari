#include <stdio.h>
#include <stdlib.h>
//#include <errno.h>
extern int errno; // errno ernno.h nin içindeki bir variable onu include etmeden programa dahil etmek için extern commandini kullanıyoruz.
/*bu errno herhangi ters giden bir durumda fonksiyonlar tarafından değişiyor. */
#include <string.h>/* errnonun açılamasını kullanmak için string.h kütüphanesinden strerror() ifadesini kullanacağız.*/
int main(int argc, char *argv[]){
  /* errno = 0; *//* ernno nun en başta 0 a eşitlenmesi tavsiye ediliyor */
  printf("Errno before:%d\n",errno);
  FILE * fptr;
  fptr = fopen("myfile.txt","r");
  if(fptr == NULL){
    printf("Errno after:%d\n",errno);//1
    printf("%s\n",strerror(errno));//2
    perror("");/* 2nin alternatifi olarak stdio dan bu fonksiyonu da kullanabiliriz. içine string girildikten
    sonra boşuk bırakıp hatayı basıyor*/

    /* bunlar basit ve kolay ancak error un bastrılıcağı yer değiştirilmiş olabliyor.
    ileri seviyede error u bir dosyaya yada bir log dosyasına bastırcak şekilde ayarlamış olabiliyoruz.
    bu yüzden bunu değiştirmek için fprintf kullanacağız. */
    fprintf(stderr,"%d %s\n",errno,strerror(errno));
  }
  return 0;
}
