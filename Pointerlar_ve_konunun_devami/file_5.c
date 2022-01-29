#include <stdio.h>
#include <string.h>
typedef struct{
  int id;
  char name[20];}item;
int main(int argc, char  *argv[]){
  item first,second,third;
  first.id = 10276;
  strcpy(first.name,"Widget");
  second.id = 11786;
  strcpy(second.name,"Gadget");
  FILE * fptr = fopen("new4.bin","wb");
  fwrite(&first,sizeof(first),1,fptr);
  fwrite(&second,sizeof(second),1,fptr);
  fclose(fptr);
  fptr = fopen("new4.bin","rb");
  /* şimdi fseek ile açılan dosyanın konumunu ayarlayacağız.
  çünkü third ün ikinin kopyası olmasını istiyoruz. */
  fseek(fptr,1*sizeof(item),SEEK_SET);
  /* seek set 3 argüman alıyor
    1. FILE pointer
    2. byte sayısı: belirtilen pozisyondan itibaren ileri alıyor.
    3. SEEK_SET:start of file,SEEK_CUR:current location,SEEK_END:end of file */
  fread(&third,sizeof(item),1,fptr);
  printf("%d %s\n",third.id,third.name);
  return 0;
}
/*
ftell(fptr): fptrnin mevcut konumunu verir
feof(ptr): eğer fptr EOF ye ulaşmmaış ise  0 dönderir.
Örnek:
int a = ftell(fptr);
while(!feof(ptr)){....};
*/
/* ayrıca ferror(fptr) hata yoksa 0 dönderirken hata varsa 1 dönderir. */
