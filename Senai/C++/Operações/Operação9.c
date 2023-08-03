#include <stdio.h>

int main() {
    int a = 5; //Cria uma váriavel com valor determinado com caracter "a" 
    int b = 3; //Cria uma váriavel com valor determinado com caracter "b" 
    int result; // Cria uma váriavel com caracter "result" que significa resultado

    result = a - b; // Colocar o valor de a//5 - b//3 na váriavel "result"

    printf("O resultado da subtracao e: %d\n", result); //Exibe o resultado

    int x = 10; //Cria uma váriavel com valor determinado com caracter "x" 
    int y = 20; //Cria uma váriavel com valor determinado com caracter "y" 
    int resultado = 0; //Cria uma váriavel com valor determinado com caracter "resultado" 

    /* Loop para somar os números de x até y */
    for (int i = x; i <= y; i++) { // faz um loop usando os valores de x e de y
    // sendo que o i = x, e se o i for menor ou igual e y, adiciona mais um no i
        resultado += i; 
    }

    printf("A soma dos numeros de %d ate %d e: %d\n", x, y, resultado); // Exibe o resultado

    return 0;

}