#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
   
    srand(time(NULL));


    int vet[5], vat[5], vot[5], num;
   
    for (int i = 0; i < 5; i++) {
     
        vet[i] = rand() % 100 + 1;
        vat[i] = rand() % 100 + 1;
       
        int x = vet[i];
        int y = vat[i];
        
        vot[i] = x*y;
    }


   
    for (int i = 0; i < 5; i++) {
        printf("%d x %d = %d\n", vet[i], vat[i], vot[i]);
    }      
   
    return 0;
}

