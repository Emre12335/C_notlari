/* istenilen değeri variable a atamak için pratik bir operator var. */
/*
  bu "?:" operatorü:

-----------------------------------------------------
  variable = Expression1 ? Expression2 : Expression3
----------------------------------------------------

  bu ifadenin demek istediği şey aslında:

-------------------------
  if(Expression1){
    variable = Expression2;
  }
  else{
    variable = Expression3;
  }
---------------------------

*/
#include <stdio.h>
int main(){
  int a,i;
  i = 9;
  a = i > 9 ? 9:i;
  printf("%d\n", a);
  /* büyük küçüklük karşılaştırma */
  int m = 15,n = 16;
  (m > n) ? printf("m is greater than n that is %d > %d",m, n)
  : printf("n is greater than m that is %d > %d",n, m);
  return 0;
}
