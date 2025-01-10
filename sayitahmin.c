#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int max=100;
    int min=1;
    int tahmin, tahminler, cevap;

    srand(time(0));
    cevap=(rand()%max)+min;

    do{
        printf("Bir tahmin yapiniz\n");
        scanf("%d", &tahmin);

        if(tahmin>cevap){
            printf("Tahmininiz sayidan daha buyuk!\n");
        }
        else if(tahmin < cevap){
            printf("Tahmininiz sayidan daha kucuk!\n");
        }
        else{
            printf("Tahmininiz dogru!\n");}            
        tahminler++;
        }while(tahmin!=cevap);
        
    

    printf("---------------------\n");
    printf("Cevap = %d\n", cevap);
    printf("Tahmin sayiniz = %d\n", tahminler);
    printf("---------------------\n");

    return 0;
}