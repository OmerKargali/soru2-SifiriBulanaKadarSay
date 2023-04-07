// �mer KARGALI
// 1220505069
// Yaz�l�m M�hendisli�i 1. S�n�f

#include <stdio.h>

int islemSayisi(int sayi1, int sayi2);

int main() {


    int sayi1, sayi2; // Burada de�i�kenlerimizi tan�ml�yoruz.

    printf("Birinci sayiyi giriniz : "); // Ekrana printf fonksiyonu ile istedi�imiz yaz�y� yazd�r�yoruz.
    scanf("%d", &sayi1); // Scanf fonksiyonu ile ekrana girilen sayi1 de�erini al�yoruz.

    printf("Ikinci sayiyi giriniz : ");// Ekrana printf fonksiyonu ile istedi�imiz yaz�y� yazd�r�yoruz.
    scanf("%d", &sayi2);// Scanf fonksiyonu ile ekrana girilen sayi2 de�erini al�yoruz.


    printf("Islem sayisi : %d\n", islemSayisi(sayi1, sayi2)); // Burada i�lem say�s�n� hesaplay�p ayn� zamanda yazd�r�yoruz.

    return 0;
}

// ��lem say�s�n�n hesaplanmas� i�lemini burada yapaca��z.

int islemSayisi(int sayi1, int sayi2) {
    int sayac = 0;

    // num1 veya num2 0'a e�it olana kadar i�lem yap�n
    while (sayi1 != 0 && sayi2 != 0) { // Burada sayi1 veya sayi2 de�eri 0'a e�it olana kadar bu d�ng�y� tekrar ediyoruz.

        // num1, num2'den b�y�kse num2'yi num1'den ��kar�n, aksi takdirde num1'i num2'den ��kar�n
        if (sayi1 >= sayi2) { // sayi1 de�eri sayi2 de�erinden b�y�kse...
            sayi1 -= sayi2; // sayi2 de�eri sayi1 de�erinden ��kar�lacakt�r.
        } else { // E�er sayi2 de�eri sayi1 de�erinden b�y�kse...
            sayi2 -= sayi1; // sayi1 de�eri sayi2 de�erinden ��kar�lacakt�r.
        }

        sayac++; // Ve saya� de�eri bir artt�r�larak d�ng� istedi�imiz ko�ula ula�ana kadar devam edecektir.
    }
    printf("\n\n");
    return sayac;
}
