#include <stdio.h>
#include <stdlib.h>

int main(){

    int x,y;
    char km;
    printf("Program Menentukan Kuadran Yang Dilihat Pada Titik Diagram Kartesian\n\n");
    printf("Masukkan titik koordinat Anda (ex:3,4) :\n");
    scanf("%d%c%d", &x, &km, &y);

    if(x > 0 && y > 0){
        printf("\n=========================================================");
        printf("\n\tTitik koordinat anda berada di kuadran I\n");
        printf("=========================================================\n");
    }else if(x < 0 && y > 0){
        printf("\n=========================================================");
        printf("\n\tTitik koordinat anda berada di kuadran II\n");
        printf("=========================================================\n");
    }else if(x < 0 && y < 0){
        printf("\n=========================================================");
        printf("\n\tTitik koordinat anda berada di kuadran III\n");
        printf("=========================================================\n");
    }else if(x > 0 && y < 0){
        printf("\n=========================================================");
        printf("\n\tTitik koordinat anda berada di kuadran IV\n");
        printf("=========================================================\n");
    }else{
        printf("\n=========================================================");
        printf("\n\tTitik koordinat x dan y tidak boleh 0\n");
        printf("=========================================================\n");
    }
    return 0;
}
