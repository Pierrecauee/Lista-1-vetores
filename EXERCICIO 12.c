#include <stdio.h>
#include <string.h>

int main() {
    char encoded_message[1001]; // Array para armazenar a mensagem codificada
    fgets(encoded_message, sizeof(encoded_message), stdin); // Lê a mensagem codificada

    int len = strlen(encoded_message);
    char decoded_message[1001]; // Array para armazenar a mensagem decodificada
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (encoded_message[i] == 'p' && i < len - 1) {
            i++; // Avança para a próxima letra após o 'p'
            decoded_message[j] = encoded_message[i];
        } else {
            decoded_message[j] = encoded_message[i];
        }
        j++;
    }
    decoded_message[j] = '\0'; // Adiciona o caractere nulo para finalizar a string

    printf("%s", decoded_message); // Imprime a mensagem decodificada

    return 0;
}
