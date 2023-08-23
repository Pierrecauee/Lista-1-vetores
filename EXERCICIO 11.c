#include <stdio.h>
#include <stdlib.h>

int main() {
    float notas[5]; 
    for (int i = 0; i < 5; i++) {
        scanf("%f", &notas[i]); // Lê as notas
    }

   
    for (int i = 0; i < 5 - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < 5; j++) {
            if (notas[j] < notas[min_index]) {
                min_index = j;
            }
        }
        float temp = notas[i];
        notas[i] = notas[min_index];
        notas[min_index] = temp;
    }

    // Calcula a nota final excluindo a menor e a maior nota
    float nota_final = notas[1] + notas[2] + notas[3];

    printf("%.1f\n", nota_final); // Imprime a nota final com uma casa decimal

    return 0;
}
