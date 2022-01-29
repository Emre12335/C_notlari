#include <stdio.h>
/* arrayler bir fonksiyonun girdisi olamaz ancak arrayin ismi bir addrestir*/
/* bu özelliği kullanarak rahatlıkla arraylerin girdi olmasını sağlayabiliriz.*/
int sum_of_list(int* address_of_array,int size_of_array);
int main(){
  int ar1[5] = {1,2,23132,123,123};
  printf("%d\n",sum_of_list(ar1,5));
  return 0;
}
int sum_of_list(int* address_of_array,int size_of_array){
  int sum = 0;
  for(int i = 0; i < size_of_array; i++){
    sum += *(address_of_array + i);
  }
  return sum;
}
