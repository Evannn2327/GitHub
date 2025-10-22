#include <stdio.h>

int main() {
    int angka;
    int total = 0;

    printf("Masukkan angka (atau -1 untuk berhenti): ");
    scanf("%d", &angka);

    while (angka != -1) {
        total += angka;
        printf("Masukkan angka (atau -1 untuk berhenti): ");
        scanf("%d", &angka);
    }

    printf("Total penjumlahan adalah: %d\n", total);

    return 0;
}