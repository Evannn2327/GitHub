#include <stdio.h>

int main(){
    while(1){
        int jumlahData =0;
        printf("Masukkan jumlah n Array: ");
        scanf("%d", &jumlahData);

        int nilai[jumlahData];
        char initial[jumlahData];

        for (int i = 0; i < jumlahData; i++){
            printf("Masukkan inisial siswa: ");
            scanf(" %c", &initial[i]);
            printf("Masukkan nilai siswa: ");
            scanf("%d", &nilai[i]);
        }

        int maxIndex = 0;
        for(int i = 1; i < jumlahData; i++){
            if(nilai[i] > nilai[maxIndex]){
                maxIndex = i;
            }
        }
        printf("Siswa dengan nilai tertinggi:\n");
        printf("Inisial: %c\n", initial[maxIndex]);
        printf("Nilai: %d\n", nilai[maxIndex]);
    }
    return 0;
}   