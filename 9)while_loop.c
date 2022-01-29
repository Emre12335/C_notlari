#include <stdio.h>
/*
  while loop if statement gibi çalışır ancak önerme yanlış oluncaya kadar döngüde kalır.
*/

/*
  while loop un syntax ı if statement ın syntax ına çok benzer.
  while(statement){operations;} şeklindedir.(1)
*/

/*
  c de pythondakinden farklı olarak 2 tane while loop vardır.
  'do while loop' adı verilen while loop  da normal while loop un aksine
  while loop un alt kısmındadır.
*/
/*
  bu olay do while ın en az bir kere çalışacağı
  anlamına gelir while loop un içi yanlış olsa bile(2)
*/
/*
  syntax of do while loop
  do{operations;}while(statement);(2)
*/
/* python da olduğu gibi c'de de break ve continue kullanarak while loop dan çıkabiliriz yada atlayabiliriz.(3)*/
int main(){
  int a = 0;
  while (a < 9){printf("%d\n",a++);}//(1)
  a++;
  printf("%d\n",a);
  do{printf("%d\n",a);}while(a != 10);//(2)
  while (1){//(3)
    if (a == 18){break;}
    else if(a == 13){a++;continue;}
    else{printf("%d\n",a);}
    a++;
  }
  return 0;
}
