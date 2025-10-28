#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    int total1, total2, durasi, jam, menit;

    printf("Masukkan jam dan menit mulai parkir (h1 m1): ");
    scanf("%d %d", &h1, &m1);

    printf("Masukkan jam dan menit selesai parkir (h2 m2): ");
    scanf("%d %d", &h2, &m2);

    // ubah ke menit total
    total1 = h1 * 60 + m1;
    total2 = h2 * 60 + m2;

    // jika waktu selesai lebih kecil, berarti sudah melewati jam 12
    if (total2 < total1) {
        total2 += 12 * 60; // tambahkan 12 jam
    }

    durasi = total2 - total1;
    jam = durasi / 60;
    menit = durasi % 60;

    printf("%d jam %d menit\n", jam, menit);

    return 0;
}
