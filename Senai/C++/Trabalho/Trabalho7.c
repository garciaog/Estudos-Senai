//Exercícios de C:

#include <stdio.h> // substituição do "funcio" para "stdio.h"

int main() { // espaçamento entre "()" e {
   int num;

   printf("Digite um numero:");
   scanf("%d", &num);
   for (int i = 1; i <= num; i++) 
   {
   printf("%d\n", i);
   }

//...

   int n1, n2, soma;

   printf("Digite dois numeros: ");
   scanf("%d %d", &n1, &n2); //substituindo o "\n" por "&d" por ser duas variaveis

   soma = n1 + n2;
   printf("A soma dos numeros e %d\n", soma);  
   
//...

   int x = 5;

   printf("O valor de x e: %d\n", x); 

   x = 10;
   printf("O novo valor de x e: %d\n", x); // Retirada do valor a mais "x = 10"
   
//...

   int num2;

   printf("Digite um numero: ");
   scanf("%d", &num2);
   
   if(num2 % 2 == 0) {
        printf("%d e um numero par\n", num2); // Adicionando o "{}" no if e no else
   } else {
        printf("%d e um numero ímpar\n", num2);
   }

//...

   int i2, n;
   int soma2 = 0;

   printf("Digite um numero: ");
   scanf("%d", &n);

   for(i2 = 0; i2 <= n; i2++)
   {
    soma2 += i2;
   }

   printf("A soma dos numeros de 0 a %d e %d\n", n, soma2);

   return 0;
}

// Adicionei o número 2 na frente de algumas váriaveis por ser váriaveis
// com nomes repetidos, como a de "soma", e o "i",