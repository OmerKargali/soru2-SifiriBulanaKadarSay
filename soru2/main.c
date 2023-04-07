// Ömer KARGALI
// 1220505069
// Yazýlým Mühendisliði 1. Sýnýf

#include <stdio.h>

int islemSayisi(int sayi1, int sayi2);

int main() {


    int sayi1, sayi2; // Burada deðiþkenlerimizi tanýmlýyoruz.

    printf("Birinci sayiyi giriniz : "); // Ekrana printf fonksiyonu ile istediðimiz yazýyý yazdýrýyoruz.
    scanf("%d", &sayi1); // Scanf fonksiyonu ile ekrana girilen sayi1 deðerini alýyoruz.

    printf("Ikinci sayiyi giriniz : ");// Ekrana printf fonksiyonu ile istediðimiz yazýyý yazdýrýyoruz.
    scanf("%d", &sayi2);// Scanf fonksiyonu ile ekrana girilen sayi2 deðerini alýyoruz.


    printf("Islem sayisi : %d\n", islemSayisi(sayi1, sayi2)); // Burada iþlem sayýsýný hesaplayýp ayný zamanda yazdýrýyoruz.

    return 0;
}

// Ýþlem sayýsýnýn hesaplanmasý iþlemini burada yapacaðýz.

int islemSayisi(int sayi1, int sayi2) {
    int sayac = 0;

    // num1 veya num2 0'a eþit olana kadar iþlem yapýn
    while (sayi1 != 0 && sayi2 != 0) { // Burada sayi1 veya sayi2 deðeri 0'a eþit olana kadar bu döngüyü tekrar ediyoruz.

        // num1, num2'den büyükse num2'yi num1'den çýkarýn, aksi takdirde num1'i num2'den çýkarýn
        if (sayi1 >= sayi2) { // sayi1 deðeri sayi2 deðerinden büyükse...
            sayi1 -= sayi2; // sayi2 deðeri sayi1 deðerinden çýkarýlacaktýr.
        } else { // Eðer sayi2 deðeri sayi1 deðerinden büyükse...
            sayi2 -= sayi1; // sayi1 deðeri sayi2 deðerinden çýkarýlacaktýr.
        }

        sayac++; // Ve sayaç deðeri bir arttýrýlarak döngü istediðimiz koþula ulaþana kadar devam edecektir.
    }
    printf("\n\n");
    return sayac;
}
