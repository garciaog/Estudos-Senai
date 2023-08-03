//a
#include <stdio.h>

int main() {
   int x = 5;
   int y = 2;
   int resultado = x + y;
   printf("A soma de x e y é: %d\n", resultado);

//b
   int n = 10;
   int soma = 0;

   for (int i = 0; i <= n; i++)
{
        soma += i;
}

   printf("A soma dos números de 1 a %d é: %d\n", n, soma);

//c
   char nome[10];

   printf("Digite seu nome: ");

   scanf("%s", nome);

   printf("Olá, %s!\n", nome);

   return 0;
}