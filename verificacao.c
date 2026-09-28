// Verificação de Par ou Ímpar

#include <stdio.h>
int main(){
    int par;

    printf("Detecção de par ou ímpar");
    scanf("%d", &par);  // &-> Armazena a resposta do usário

    if (par%2==0){  // Se o resto da divisao do que o usário digitou, for igual a 0
        printf("Par");
    }else{
        printf("Ímpar");
    }
    getchar(); // lê e descarta o \n que o scanf deixou no buffer de entrada (stdin), esvaziando-o.
    getchar(); // com o buffer vazio, bloqueia a execução até o usuário digitar um caractere (e Enter), pausando o programa.
    return 0;
}


/*Buffer ->O buffer é uma área da memória que guarda 
temporariamente os dados de entrada (como as teclas digitadas) 
até o programa lê-los.*/