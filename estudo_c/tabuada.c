// Tabuada 

#include <stdio.h>

int main(){
    int tabuada;

    printf("Informe um numero para a tabuada: ");
    scanf("%d", &tabuada);

    for(int i = 0; i < 11; i++){
        printf("%d X %d = %d\n", i,tabuada, i*tabuada);
    }
    getchar();
    getchar();
    return 0;
}

/*
int i = 0 -> i vai ter o valor 0
i < 10 -> vai rodar o for enquanto o i for menor que 10
i++ -> ao final de cada volta, sempre vai estar somando +1
*/