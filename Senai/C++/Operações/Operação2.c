#include <stdio.h>

int main() {

    int a, b;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro número");
    scanf("%d", &b);

    int soma = a + b;             
    int subtracao = a - b;           
    int multiplicacao = a * b;   
    int divisao = a / b;  
    
    printf("%d\n", soma);
    printf("%d\n", subtracao);
    printf("%d\n", multiplicacao);
    printf("%d\n", divisao);

    return 0;
}