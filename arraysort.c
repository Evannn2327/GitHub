#include <stdio.h>

int main(){
    while(1){
        int jumlahData = 0;
        printf("Masukkan jumlah n Array: ");
        scanf("%d", &jumlahData);

        int nilai[jumlahData];
        char initial[jumlahData];

        for (int i = 0; i < jumlahData; i++){
            printf("Masukkan inisial siswa ke %d: ", i+1);
            scanf(" %c", &initial[i]);
            printf("Masukkan nilai siswa ke %d: ", i+1);
            scanf("%d", &nilai[i]);
        }

        printf("\nDAFTAR NILAI BELUM SORTING\n");
        printf("Initial\tNilai\n");
        for(int i = 0; i < jumlahData; i++){
            printf("%c\t%d\n", initial[i], nilai[i]);
        }

        // Proses sorting nilai terkecil ke terbesar
        for(int i = 0; i < jumlahData; i++){
            for(int j = i + 1; j < jumlahData; j++){
                if(nilai[i] > nilai[j]){
                    int temp = nilai[i];
                    char tempInitial = initial[i];
                    initial[i] = initial[j];
                    initial[j] = tempInitial;
                    nilai[i] = nilai[j];
                    nilai[j] = temp;
                }
            }
        }

        printf("\nDAFTAR NILAI SUDAH SORTING\n");
        printf("Initial\tNilai\n");
        for(int i = 0; i < jumlahData; i++){
            printf("%c\t%d\n", initial[i], nilai[i]);
        }
        int total = 0;
        for(int i = 0; i < jumlahData; i++){
            total += nilai[i];
        }
        float rataRata = (float) total / jumlahData;

        printf("\nNilai Rata-Rata: %.2f\n", rataRata);

        char ulang;
        printf("\nApakah ingin input data lagi? (y/n): ");
        scanf(" %c", &ulang);
        if(ulang == 'n' || ulang == 'N'){
            break;
        }
        printf("\n---- AKHIR DATA ----\n");    
    }

    return 0;
}
