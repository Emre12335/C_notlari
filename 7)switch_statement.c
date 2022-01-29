#include <stdio.h>
/*
switch statement problemi if else yerine caselere böler.
*/

/*
switch (n)
{
    case 1: // code to be executed if n = 1;
        break;
    case 2: // code to be executed if n = 2;
        break;
    default: // code to be executed if n doesn't match any cases
}
*/
/* caseler sınırsız sayıda olabilir. */
/* case in en altına break eklememizin sebebi eklemezsek otomatik diğer case e geçiyor. */
/* bunun olmamasını istiyorsan break zorunlu */
int main() {
  int n = 1;
  switch(n) {
    case 1:
      printf("1\n");
      break;
    case 2:
      printf("2\n");
      break;
    default:
      printf("not 1 neither 2 \n");
      break;
  }
  return 0;
}
