#include <stdio.h>

float luasPersegiPanjang(float p, float l) {
    return p * l;
}

float luasBujurSangkar(float s) {
    return s * s;
}

void jenisSegitiga(float a, float b, float c) {
    if (a == b && b == c) {
        printf("Segitiga Sama Sisi\n");
    } else if (a == b || b == c || a == c) {
        printf("Segitiga Sama Kaki\n");
    } else {
        printf("Segitiga Sembarang\n");
    }
}

int main() {
    int pilihan;
    float p, l, s, a, b, c;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Luas Persegi Panjang\n");
        printf("2. Luas Bujur Sangkar\n");
        printf("3. Menentukan Jenis Segitiga\n");
        printf("4. Keluar\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            printf("\n-- Luas Persegi Panjang --\n");
            printf("Masukkan panjang: ");
            scanf("%f", &p);
            printf("Masukkan lebar: ");
            scanf("%f", &l);
            printf("Luas = %.2f\n", luasPersegiPanjang(p, l));
        } 
        else if (pilihan == 2) {
            printf("\n-- Luas Bujur Sangkar --\n");
            printf("Masukkan sisi: ");
            scanf("%f", &s);
            printf("Luas = %.2f\n", luasBujurSangkar(s));
        } 
        else if (pilihan == 3) {
            printf("\n-- Menentukan Jenis Segitiga --\n");
            printf("Masukkan sisi 1: ");
            scanf("%f", &a);
            printf("Masukkan sisi 2: ");
            scanf("%f", &b);
            printf("Masukkan sisi 3: ");
            scanf("%f", &c);
            jenisSegitiga(a, b, c);
        } 
        else if (pilihan == 4) {
            printf("\nTerima kasih, program selesai.\n");
        } 
        else {
            printf("\nPilihan tidak valid.\n");
        }

    } while (pilihan != 4);

    return 0;
}
