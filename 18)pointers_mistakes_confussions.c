/* hatalar
pc is address but c is not
pc = c;  // Error

// &c is address but *pc is not
*pc = &c;  // Error

// both &c and pc are addresses
pc = &c;  // Not an error

// both c and *pc values
*pc = c;  // Not an error
*/

/* kafa karışıklığı
Why didn't we get an error when using int *p = &c;
It's because
int *p = &c;
is equivalent to

int *p:
p = &c;
In both cases, we are creating a pointer p (not *p) and assigning &c to it.
To avoid this confusion, we can use the statement like this:

int* p = &c;*/

/* kafa karışıklığı 2
int* p1,new_v;
bu syntax bize bir tane pointer bir tane normal variable yapar.
new_v integer variable
p1 ise pointer olur.
*/

#include <stdio.h>
int main(){
  // kafa karışıklığı 2
  int* p1,new_v;
  new_v = 5;
  p1 = &new_v;
  printf("new_v = %d\n",new_v);
  printf("p1 = %d\n",*p1);
  // kafa karışıklığı 1
  int a = 10;
  int *p2 = &a;
  printf("a = %d\n",a);
  printf("p2 = %d\n",*p2);
  return 0;
}
