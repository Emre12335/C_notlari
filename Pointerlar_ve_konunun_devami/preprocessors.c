/* preprocess dediğimiz şeyler yanına '#' koyduğumuz ifadeler */

 /* sırayla işlevlerine bakalım */
/* preprocessor ifadelerin sonuna noktalı virgül konmaz. */
 /*
 #include: kütüphaneleri dosyaya eklemek için kullanılır.eğer ki
 kütüphane yerine bir kullanıcı dosyası include edilecek ise <> yerine "" kullanılır
 ör:/
 #include <stdio.h>
 #include "myutil.h"


 #define/#undef: makro tanımlarken kullanılıyor.
 ör:/
 #define PI 3.14
 #define AREA(x) (x*x*PI)

 codun her yerinde PI yerine 3.14 yazılıyor derlenirken;
 ayrıca alttaki gibi de kullanılabiliyor.

 #undef ise tanımlı macroyu iptal etmeyi sağlar
 ör:/
 #undef PI

 Eğer ki makronun ismi fazla uzun ise '\' ile alt satıra geçilebilir.
 ör/:
 #define VERY_LONG_CONSTANT \
 23.678901

 Ayrıca bazı hazır tanımlı makrolarda vardır bunları herhangi bir define işlemi yapmadan kullanablirisin
 __TIME__: The current time as a string in the format "hh:mm:ss"
 __DATE__: The current date as a string in the format "mm dd yyyy"
 __FILE__: The current filename as a string
 __LINE__: The current linenumber as a string
 __STDC__: 1


 #ifdef/#ifndef/#if/#elif/#else/#endif:
 ifdef: ifdefined anlamına geliyor
 ifndef: ifnotdefined anlamına geliyor
 bunları kullanarak eğer define edilmişse undef ediyorsun
 define edilmemişse define ediyorsun
 if ile başlanan ifadenin sonu her zaman endif ile bitmek zorunda
 ör/:
 #ifdef RATE
  #undef RATE
  printf("....");
  #define RATE 0.068
 #else
  #define RATE 0.068
 #endif

 istiyorsan rate i önce if else ile kıyaslayıp da değiştire de bilirsin.
 ör/:
 #if LEVEL > 6
  ......
 #elif LEVEL > 5
  ......
 #else
  ......(last option here)
 #endif

 #ifndef ve #ifdef ile aynı mantıkta kullanılan #if !defined(MAKRO) if defined(MAKRO)
 yani #if defined(xy) == #ifdef xy


 #pragma: compiler a bağlı detay verilmemiş.
 #error/#warning:error veya uyarı mesajı gönderir.

 Son olarak # ve ## operatörlerinin define komutu ile satır sonundaki kullanımına bakacaz.
 #:bu operatör önüne geldiği ifadeyi string e dönüştür demek
 ör/:
 #define TO_STR(x) #x
 printf("%s\n",TO_STR(123));

 ##: bu ifade ise 2 farklı ifadeyi bitişik yazdırır.
 ör:/
 #define VAR(name,num) name##num
 int x1 = 125;
 int x2 = 250;
 int x3 = 500;
 printf("%d\n",VAR(x,3)); ---> outputu 500
 */
