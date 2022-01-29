#include <stdio.h>
/*   1 pointerların fonksiyonun içinde argüman olması ve içine address girilmesi   */


// pointerlar sayesinde artık global değişken açmadan local değişkenlerin
// başka fonksiyonların içinde değişmesini sağlayabiliriz.
// bu faydalı özelliği kullanarak swap fonksiyonu yazalım;
void swap(int* p1, int* p2);
int main(){
  int x = 2,y = 3;
  printf("x = %d and y = %d\n",x,y);
  swap(&x,&y);
  printf("x = %d and y = %d\n",x,y);
  return 0;
}
void swap(int* p1, int* p2){
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
