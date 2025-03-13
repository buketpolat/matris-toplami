#include <stdio.h>
#include <stdlib.h>

int main() {
    int boyut1x, boyut1y, boyut2x, boyut2y;

    // Birinci matrisin boyutunu belirleme
    printf("birinci matrisin boyutunu belirleyiniz: ");
    scanf("%d %d", &boyut1x, &boyut1y);

    // İkinci matrisin boyutunu belirleme
    printf("ikinci matrisin boyutunu belirleyiniz: ");
    scanf("%d %d", &boyut2x, &boyut2y);

    // Matris boyutlarını kontrol et
    if (boyut1x != boyut2x || boyut1y != boyut2y) {
        printf("Matris boyutlari esit degil. Toplama yapilamaz.\n");
        return 1; // Hata koduyla çık
    }

    // Matrisleri tanımlama
    int matris1[boyut1x][boyut1y];
    int matris2[boyut2x][boyut2y];
    int toplamMatris[boyut1x][boyut1y]; // Toplam matrisi için yer ayır

    // Matrislerin boyutlarını ekrana yazdırma
    printf("birinci matrisin boyutu: [%d][%d]\n", boyut1x, boyut1y);
    printf("ikinci matrisin boyutu: [%d][%d]\n", boyut2x, boyut2y);

    // Matrislerin elemanlarını kullanıcıdan alma
    printf("1. matrisin elemanlarini giriniz: \n");
    for (int i = 0; i < boyut1x; i++) {
        for (int j = 0; j < boyut1y; j++) {
            printf("matris1[%d][%d]: ", i, j);
            scanf("%d", &matris1[i][j]);
        }
    }
    printf("\n");

    printf("2. matrisin elemanlarini giriniz: \n");
    for (int i = 0; i < boyut2x; i++) { 
        for (int j = 0; j < boyut2y; j++) {
            printf("matris2[%d][%d]: ", i, j); 
            scanf("%d", &matris2[i][j]);
        }
    }
    printf("\n");

    // Matrisleri ekrana yazdırma
    printf("1. matris:\n");
    for (int i = 0; i < boyut1x; i++) {
        for (int j = 0; j < boyut1y; j++) {
            printf("%d ", matris1[i][j]);
        }
        printf("\n");
    }

    printf("2. matris:\n");
    for (int i = 0; i < boyut2x; i++) {
        for (int j = 0; j < boyut2y; j++) {
            printf("%d ", matris2[i][j]);
        }
        printf("\n");
    }

    // Matrisler toplamı
    for (int i = 0; i < boyut1x; i++) {
        for (int j = 0; j < boyut1y; j++) {
            toplamMatris[i][j] = matris1[i][j] + matris2[i][j];
        }
    }

    // Matrisler toplamını ekrana yazdırma
    printf("Matrisler toplami:\n");
    for (int i = 0; i < boyut1x; i++) {
        for (int j = 0; j < boyut1y; j++) {
            printf("%d ", toplamMatris[i][j]);
        }
        printf("\n");
    }

    return 0;
}