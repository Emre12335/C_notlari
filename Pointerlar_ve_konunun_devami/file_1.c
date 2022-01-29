#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  FILE * fptr = fopen("new.txt","w"); /*FILE pointer fopen ı açmak için kullanılır.
  fopen ın 2 argumanı var 1.si adres 2.si string biçiminde w,r,r+,w+,a*/
  if(fptr == NULL){
    printf("Error opening file.");
    return -1;
  }
  fclose(fptr);/* dosyayı kapatmak için file pointer fclose un içine yazılır.*/
  return 0;
}
