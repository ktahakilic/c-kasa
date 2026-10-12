#include <stdio.h>

int main() {


    float a ;
    float b ;

            /* a değeri burada ürünün fiyatıdır 
             b değeri burada kasaya yatirilacak tutardir */ 

    printf(" Lutfen Urunun Fiyatini Girin: \n");
    scanf("%f", &a);
    printf(" Lutfen Kasaya Yatirilacak Tutari Girin: \n");
    scanf("%f", &b);

    b < a
    ? printf("Uyari: Tutar yetersiz. Eksik miktar: %.2f TL\n", a - b)
    : printf("Para ustu: %.2f TL dir\n", b - a);

    double para_ustu_tl = b - a;

    int kalan = (int)(para_ustu_tl * 100 + 0.5);

    int adet200 = kalan / 20000;
    kalan = kalan % 20000;

    int adet100 = kalan / 10000;
    kalan = kalan % 10000;

    int adet50 = kalan / 5000;
    kalan = kalan % 5000;

    int adet20 = kalan / 2000;
    kalan = kalan % 2000;

    int adet10 = kalan / 1000;
    kalan = kalan % 1000;

    int adet5 = kalan / 500;
    kalan = kalan % 500;

    int adet1 = kalan / 100;
    kalan = kalan % 100;

    int adet50k = kalan / 50;
    kalan = kalan % 50;

    int adet25k = kalan / 25;
    kalan = kalan % 25;

    int adet10k = kalan / 10;
    kalan = kalan % 10;

    int adet5k = kalan / 5;
    kalan = kalan % 5;

    int adet1k = kalan;
    
    int toplam_adet = adet200 + adet100 + adet50 + adet20 + adet10 + adet5 + 
                      adet1 + adet50k + adet25k + adet10k + adet5k + adet1k;

    printf("\n--- Para Ustu Dagilimi ---\n");
    printf("200 TL: %d adet\n", adet200);
    printf("100 TL: %d adet\n", adet100);
    printf("50 TL: %d adet\n", adet50);
    printf("20 TL: %d adet\n", adet20);
    printf("10 TL: %d adet\n", adet10);
    printf("5 TL: %d adet\n", adet5);
    printf("1 TL: %d adet\n", adet1);
    printf("50 Kurus: %d adet\n", adet50k);
    printf("25 Kurus: %d adet\n", adet25k);
    printf("10 Kurus: %d adet\n", adet10k);
    printf("5 Kurus: %d adet\n", adet5k);
    printf("1 Kurus: %d adet\n", adet1k);

    printf("---------------------------\n");
    printf("Verilen Toplam Banknot/Madeni Para Adedi: %d adet\n", toplam_adet);

    return 0;
}
