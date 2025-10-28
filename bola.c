#include <stdio.h>

int main() {
    int a, b, c, d;
    int max, min;

    printf("Masukkan jumlah gol 4 tim: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // asumsi awal
    max = a;
    min = a;

    // cek bilangan kedua
    if (b > max) max = b;
    if (b < min) min = b;

    // cek bilangan ketiga
    if (c > max) max = c;
    if (c < min) min = c;

    // cek bilangan keempat
    if (d > max) max = d;
    if (d < min) min = d;

    printf("Gol terbanyak: %d\n", max);
    printf("Gol tersedikit: %d\n", min);

    return 0;
}
