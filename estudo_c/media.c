// Média

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f",&nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3.0;

    if (media >= 6){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
    getchar();
    getchar();
    return 0;
}