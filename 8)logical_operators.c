#include <stdio.h>
/* python daki  'and'// 'or'// 'not' kelimeleri c de operatorlerle ifade ediliyor. */
/*
    and ==> &&
    or  ==> ||
    not ==> !
*/
int main() {
  int a = 4,b = 8;
  if(a == 3 && b == 6){printf("True");}
  else if(a == 3 || b == 6){printf("Alternative");}
  else{if(!(b == 7)){printf("Alternative-2");}
        else{printf("False");}}
  return 0;
}
