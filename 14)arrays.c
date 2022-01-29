/* pythondaki listelerden farklı olarak c de arraylar vardır. */
// arraylar büyüklüğü önceden ayarlanmış listelerdir.
// arraylar e birşeyler ekleyip çıkarmak  uzun sürer bu yüzden eklemek çıkarmak için değil
// birşeyleri saklamak için ve saklanan şeyleri değiştirmek için ideal ama uzunluğu değiştirilmemeli

// arrayler tek tip veri barındırabilir. yani hem char hem int taşıyan bir array olamaz.
// syntax: type_of_array array_name[size] = {}
// size kadar değer girilmezse kalan değerler otomatik olarak 0 a atanır.
#include <stdio.h>
int main() {
  int new_a[10] = {0};
  printf("new_a[1] = %d\n",new_a[1]); // 0 dan 19 a kadar yazılarak arraydekileri görebiliriz.
  new_a[1] = 100;
  printf("new_a[1] = %d\n",new_a[1]); // arraylarin elemanları değiştirilebilir
  for(int i = 0;i < 10;i++){
  printf("new_a[%d] = %d\n",i,new_a[i]);
  }
  return 0;
}
