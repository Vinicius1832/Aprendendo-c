// Verificação de qual número vai ser maior

#include <stdio.h>

int main(){
    float numero1, numero2, numero3;

    printf("Informe um numero inteiro: ");
    scanf("%f", &numero1);
    printf("Informe um numero inteiro: ");
    scanf("%f", &numero2);
    printf("Informe um numero inteiro: ");
    scanf("%f", &numero3);

    if (numero1 >= numero2 && numero1 >= numero3){
        printf("Numero %.1f é maior", numero1);
    }else if(numero2 >= numero1 && numero2 >= numero3 ){
        printf("Numero %.1fé maior", numero2);
    }else{
        printf("Numero %.1f e maior", numero3);
    }
    getchar();
    getchar();
    return 0;

}