#include <stdio.h>
int main(int argc, char const *argv[]){
  int a = 1025;
  char b = 23;
  float c = 1.5;
  double d = 2.235;

  int * p1 = &a;
  char * p2 = &b;
  float * p3 = &c;
  double * p4 = &d;
  void * p5 = &b;

  printf("a nin Boyut:%d\n",sizeof(a));
  printf("b nin Boyut:%d\n",sizeof(b));
  printf("c nin Boyut:%d\n",sizeof(c));
  printf("d nin Boyut:%d\n",sizeof(d));
  printf("--------\n");
  printf("p1 nin Boyut:%d\n",sizeof(p1));
  printf("p2 nin Boyut:%d\n",sizeof(p2));
  printf("p3 nin Boyut:%d\n",sizeof(p3));
  printf("p4 nin Boyut:%d\n",sizeof(p4));
  printf("p5 nin Boyut:%d\n",sizeof(p5));
  printf("--------\n");
  printf("a nin adresi:%d\n",&a);
  printf("b nin adresi:%d\n",&b);
  printf("c nin adresi:%d\n",&c);
  printf("d nin adresi:%d\n",&d);
  printf("--------\n");
  printf("p1 nin belirttigi adresi:%d\n",p1);
  printf("p2 nin belirttigi adresi:%d\n",p2);
  printf("p3 nin belirttigi adresi:%d\n",p3);
  printf("p4 nin belirttigi adresi:%d\n",p4);
  printf("p5 nin belirttigi adresi:%d\n",p5);
  printf("--------\n");
  printf("p1 nin belirttigi deger:%d\n",*p1);
  printf("p2 nin belirttigi deger:%d\n",*p2);
  // şimdi p2 e p1 nin belirttiği adresi typecasting yolu ile atayacağım
  p2 = (char*)p1;
  printf("p1 nin belirttigi adresi:%d\n",p1);
  printf("p2 nin belirttigi adresi:%d\n",p2);
  printf("p1 nin belirttigi deger:%d\n",*p1);
  printf("p2 nin belirttigi deger:%d\n",*p2);
  printf("p2 nin 1 yanindaki deger:%d\n",*(p2+1));

  printf("%lf\n",p4[2]);
  return 0;
}
