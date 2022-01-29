#include <stdio.h>
int main(int argc, char const *argv[]){
  FILE * fptr;
  int c,stock;
  char buffer[200],item[10];
  float price;
  fptr = fopen("new.txt","r");
  fgets(buffer,20,fptr);/*
  1. parametresi içine yazılacak olan string
  2. parametresi NULL karakteri dahil edilerek total karakter sayısı yani 19 karakter 1 tane de NULL gelecek
  3. FILE poiinterın ismi*/
  /* eğer string in karakter sayısı yetmez ise direk string kadar alır */
  printf("%s\n",buffer);
  fscanf(fptr,"%d%s%f",&stock,&item);
  printf("%d %s %f\n",stock,item,price);
  while((c = getc(fptr)) != EOF){
    /*getc yada fgetc direk karaktere atama yapılarak kullanılır
    file ın sonuna ulaşıldığında EOF dönderir*/
    printf("%c",c);}
  fclose(fptr);
  return 0;
}
/* gets fonksiyonu \n ye gelene kadar okur */n
