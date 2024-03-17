#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int year;
    while (1) {
        printf("Masukkan tahun: ");
        if (scanf("%d", &year) != 1) {
            printf("Input bukan merupakan bilangan. ");
            while(getchar() != '\n');
            continue;
        }

        if (year < 1000 || year > 9999) {
            printf("Tahun harus terdiri dari 4 digit.\n ");
            continue;
        }

        if (isLeapYear(year)) {
            printf("%d adalah tahun kabisat.\n", year);
        } else {
            printf("%d bukan tahun kabisat.\n", year);
        }

        break;
    }

    return 0;
}