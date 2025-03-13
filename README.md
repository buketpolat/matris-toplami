# Matris Toplama Programı

Bu C programı, kullanıcı tarafından girilen iki matrisi toplar ve sonucu ekrana yazdırır.

## Nasıl Kullanılır

1.  **Derleme:** Programı bir C derleyicisi (örneğin, GCC) kullanarak derleyin:

    ```bash
    gcc matris_toplama.c -o matris_toplama
    ```

2.  **Çalıştırma:** Derlenen programı çalıştırın:

    ```bash
    ./matris_toplama
    ```

3.  **Giriş:** Program, önce birinci matrisin boyutunu (satır ve sütun sayısı), ardından ikinci matrisin boyutunu ve her iki matrisin elemanlarını sırayla girmenizi isteyecektir.

4.  **Çıktı:** Program, girilen matrisleri ve toplam matrisi ekrana yazdıracaktır.

## Örnek Kullanım
birinci matrisin boyutunu belirleyiniz: 2 3
ikinci matrisin boyutunu belirleyiniz: 2 3
birinci matrisin boyutu: [2][3]
ikinci matrisin boyutu: [2][3]

matrisin elemanlarini giriniz:
matris1[0][0]: 1
matris1[0][1]: 2
matris1[0][2]: 3
matris1[1][0]: 4
matris1[1][1]: 5
matris1[1][2]: 6

matrisin elemanlarini giriniz:
matris2[0][0]: 7
matris2[0][1]: 8
matris2[0][2]: 9
matris2[1][0]: 10
matris2[1][1]: 11
matris2[1][2]: 12

matris:
1 2 3
4 5 6

matris:
7 8 9
10 11 12
Matrisler toplami:
8 10 12
14 16 18

## Gereksinimler

* Bir C derleyicisi (GCC, Clang vb.)
