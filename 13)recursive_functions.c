//python da olduğu gibi c de de recursive functions vardır.
//faktöriyeli recursive biçimde yazalım
#include <stdio.h>
int factorial(int num);
int fibonacci(int position);
int main(){
  printf("%d\n",factorial(10));
  printf("%d\n",fibonacci(40));
  return 0;
}
int factorial(int num){if(num == 1){return num;}else{return num*factorial(num-1);}}
int fibonacci(int position){if (position <= 1)return 1;else{return fibonacci(position - 1) + fibonacci(position - 2);}}
