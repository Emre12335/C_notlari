/*
  python daki ne çok benzer bir if else durumu var
  elif yerine else if var.
  if - else if - else şekilnde inşa ediliyor.
*/
/*
  if(statement){operations;} statement için relational operators ı kullanıyoruz.
  şeklinde yazılıyor.
  içerisinin ';' e ihtiyacu yok.(staement ın ; e ihtiyacı yok.)
  else in (statement) a ihtiyacı yok.
  fakat else if ve else in var.
*/
/* if elseler pythondaki gibi içiçe yazılabilir.
/*
  aşağıdaki örnekte x in değeri değiştirilerek farklı çıktılar alınabilir.
*/
#include<stdio.h>
int main() {
  int x = 3;
  if(x > 3){printf("dogru");}
  else if(x == 3){printf("alternatif");}
  else{printf("yanlis");}
  return 0;
}
