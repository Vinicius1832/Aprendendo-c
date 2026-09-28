// Contar vogais de uma palavra

#include <stdio.h>

int main() {
    char palavra[100]; // Espaço onde fica até 99 palavras guardadas
    int vogais = 0;  // Contar a quantidade de vogais
    int i = 0; //é o número da posição da letra que estamos olhando agora. Começa em 0, que é a primeira letra.

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    while (palavra[i] != '\0') { //O '\0' no final é colocado pelo C automaticamente e significa "a palavra acabou aqui".
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' ||
            palavra[i] == 'o' || palavra[i] == 'u') {
            vogais++;
        }
        i++;
    }

    printf("A palavra tem %d vogais\n", vogais);

    getchar();
    getchar();
    return 0;
}