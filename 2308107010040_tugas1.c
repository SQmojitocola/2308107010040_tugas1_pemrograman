#include <stdio.h>
#include <math.h>

int main() {
    int pilihan, desimal, oktal;
    long biner;

    printf("SELAMAT DATANG DI KONVERSI BILANGAN DESIMAL!\n");
    printf("Pilih operasi konversi anda:\n");
    printf("1. Bilangan desimal ke biner\n");
    printf("2. Bilangan biner ke desimal\n");
    printf("3. Bilangan desimal ke octal\n");
    printf("4. Bilangan octal ke desimal\n");
    printf("Masukkan Pilihan Anda : ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
        printf("Masukkan bilangan desimal: ");
        scanf("%d", &desimal);

        biner = 0;
        int sisa, i = 1;
        while (desimal != 0) {
            sisa = desimal % 2;
            desimal /= 2;
            biner += sisa * i;
            i *= 10;
        }
        printf("Biner dari bilangan tersebut adalah: %ld\n", biner);
        break;

    case 2:
        printf("Masukkan bilangan biner: ");
        scanf("%ld", &biner);

        desimal = 0;
        int angka, j = 0;
        while(biner != 0) {
            angka = biner % 10;
            biner /= 10;
            desimal += angka * pow(2,j);
            ++j;
        }
        printf("Desimal dari biner tersebut adalah : %d\n", desimal);
        break;

    case 3:
        printf("masukkan bilangan desimal: ");
        scanf("%d", &desimal);

        oktal = 0;
        i = 1;
        while (desimal != 0) {
            oktal += (desimal % 8) * i;
            desimal /= 8;
            i *= 10;
        }
        printf("Octal dari bilangan tersebut adalah : %d\n", oktal);
        break;

    case 4:
        printf("Masukkan bilangan octal: ");
        scanf("%d", &oktal);

        desimal = 0;
        j = 0;
        while (oktal != 0) {
            angka = oktal % 10;
            oktal /= 10;
            desimal += angka * pow(8,j);
            ++j;
        }
        printf("Desimal dari octal tersebut adalah : %d\n", desimal);
        break;
    }

    return 0;
}