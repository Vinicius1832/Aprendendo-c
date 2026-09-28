// Soma dos números de 1 a N 

#include <stdio.h>

int main(){
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    int contador = 0;
    int soma = 0;

    while (contador < numero){  //numero vai ser = ao que for digitado 
        contador +=1;           // contador vai sempre conferir para não passar do numero informado
        soma += contador;       // soma vai contar sempre as voltas ate dar 5, então primeira volta 0 + 1 =1
                                // soma vale 1, depois o contador vai valer 2 e soma ainda vale 1, então 1 + 2 = 3
                                // e assim vai se repetir até dar 5
    }
    printf("Resultado: %d ", soma);
    getchar();
    getchar();
    return 0;
}