#include <stdio.h>

int main() {
    int a, b, c;

    do {
        printf("Masukkan tiga sisi segitiga (0 0 0 untuk berhenti): ");
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) {
            printf("Program selesai.\n");
            break; // keluar dari perulangan
        }

        if (a == b && b == c) {
            printf("Segitiga Sama Sisi\n");
        } else if (a == b || a == c || b == c) {
            printf("Segitiga Sama Kaki\n");
        } else {
            printf("Segitiga Sembarang\n");
        }

    } while (1); 

    return 0;
}
