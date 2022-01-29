#include <stdio.h>
int main(int argc, char *argv[]){
  int arr[10]; // içinden yazacağımız array(write)
  int x[10]; // yazılan şeyi içine alacağımız array(read)
  for (size_t i = 0; i < 10; i++){
    arr[i] = i;
  }
  FILE * fptr = fopen("new3.bin","wb");
  fwrite(arr,sizeof(arr[0]),sizeof(arr)/sizeof(arr[0]),fptr);
  /* 4 tane argüman var
    1. adres: memoryde nerde okumaya başlıyoruz.
    2. ve 3.(sırası önemli değil): elemanların boyutu ve eleman sayısı
    4. içine yazacağımız binary dosya */
  fclose(fptr);
  fptr = fopen("new3.bin","rb");
  fread(x,sizeof(arr[0]),sizeof(arr)/sizeof(arr[0]),fptr);
  /* 4 tane argüman var
    1. adres: memoryde nerde okumaya başlıyoruz.
    2. ve 3.(sırası önemli değil): elemanların boyutu ve eleman sayısı
    4. içinden okuyacağımız binary dosya */
  fclose(fptr);
  for (size_t i = 0; i < 10; i++){
    printf("%d\n", x[i]);
  }
  return 0;
}
