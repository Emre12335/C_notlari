#include <stdio.h>
int main(int argc, char *argv[]){
  FILE * fptr;
  char filename[50];
  printf("Enter the filename of the file to create: ");
  gets(filename);
  fptr = fopen(filename,"w");
  fprintf(fptr, "Investory\n");
  /* printf direk string yazmak için bu şekilde kullanılabliri */
  fprintf(fptr, "%d %s %f\n",100,"Widget",0.29);
  /* yada bu şeklide birden fazla parametreyi tekbir string in içinde toplayıp bastırabilir.*/
  /* 1. parametre FILE poiinter
     2. String
     3 ve daha fazlası. String in içine girecek parametreler */
  fputs("End of List",fptr);
  /* fputs direk string i içine yerleştirir 1.printf in yaptığı gibi */
  /* 1. parametre string
     2. parametre file pointerdır.*/
  return 0;
}
