 /* array sıralı bilgi içeren  bir bloktur */

 #include <stdio.h>
 void printer_of_array_addresses();
 int main() {
   printer_of_array_addresses();
   /* array string gibi değerler için herhangi bir & işareti kullanmıyoruz
      çünkü bu tiplerin kendisi adres içeriyor.*/
   /* görüldüğü gibi ar1[0] ile ar1 in adresleri aynı */
   /* yani &ar1[0] ile ar1 / *ar1 ile ar1[0]  aynı şey */
   /* aynı şekilde &ar1[1] ile ar1 + 1(4 byte) / *(ar1 + 1) ile ar1[1] aynı şey */
   /* aynı şekilde &ar1[2] ile ar1 + 2(4 byte) / *(ar1 + 2) ile ar1[2] aynı şey */
   /* aynı şekilde &ar1[i] ile ar1 + i(4 byte) / *(ar1 + i) ile ar1[i] aynı şey */
   /* bunu array e ulaşmak için kullanabiliriz */
   int* p = NULL;
   int a1[10] = {11,12,13,14,15,16,17,18,19,20};
   p = a1;
   for(int i = 0;i < 10;i++){
     printf("pointers = %d\n",*(p+i));
   }
   return 0;
 }
 void printer_of_array_addresses(){
   int ar1[5];
   int i;
   for(i = 0; i < 5;++i){
     printf("address of member %d = %d\n",i,&ar1[i]);
   }
   printf("address of ar1 = %d\n",ar1);
   printf("address of ar1+1 = %d\n",ar1 + 1);
 }
 // arraylerin ismi bir address belirtir.
 // address ile 1 toplandığında address in değeri 4 artar;
 // pointer ın addresini array in ismi yaparsak addresi 1 artırarak array in içindeki bütün verilere ulaşabiliriz.
