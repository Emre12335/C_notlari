#include<stdio.h>
/* sizeof fonksiyonu sayesinde depolama miktarları görülebilir.(1)*/
/* aynı satırda tek bir tip ile birden fazla değişken tanımlanabilir.(2)*/
/* variable ın türünü değiştirmek için variable dan önce (float)x gibi yazıyoruz.(3)*/
/* const(constant) key word variable ın türünün değiştirilememesini sağlıyor.(4)*/
/* değiştirmeye çalışırsan hata verir*/

int main(){
    int a,b;/*(2)*/
    a = 5;
    b = 6;
    int c = 15, d = 16;
    const int e = 17;
    printf("%d %d %d %f\n",a,b,c,(float)d/*(3)*/);
    /*e += 1;*//* aktif edersen hata verir(4)*/
    printf("%d\n",e/*(4)*/);
    /*sizeof*/ /*(1)*/
    printf("int size = %ld\n", sizeof(int));
    printf("float size = %ld\n", sizeof(float));
    printf("double size = %ld\n", sizeof(double));
    printf("char size = %ld\n", sizeof(char));
    return 0;
}
