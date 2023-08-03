#include <stdio.h>
#include <math.h>

// Função para verificar se um número é um quadrado perfeito
int isQuadradoPerfeito(int num) {
   int raiz = sqrt(num);
   return (raiz * raiz == num);
}

// Função para verificar se a soma dos dígitos de um número é menor ou igual a 10
int isSomaDigitosMenorIgualDez(int num) {
   int soma = 0;
   while (num != 0) {
        soma += num % 10;
        num /= 10;
   }
   return (soma <= 10);
}

int main() {
   int limiteInferior, limiteSuperior;
   printf("Digite o limite inferior do intervalo: ");
   scanf("%d", &limiteInferior);
   printf("Digite o limite superior do intervalo: ");
   scanf("%d", &limiteSuperior);

   int numeroMagico = -1;

   for (int num = limiteInferior; num <= limiteSuperior; num++) {
        if (num % 3 == 0 && isQuadradoPerfeito(num) && isSomaDigitosMenorIgualDez(num)) {
            numeroMagico = num;
            break;
        }
   }

   if (numeroMagico != -1) {
        printf("O menor número mágico dentro do intervalo [%d, %d] é: %d\n", limiteInferior, limiteSuperior, numeroMagico);
   } else {
        printf("Nenhum número mágico encontrado dentro do intervalo [%d, %d].\n", limiteInferior, limiteSuperior);
   }

   return 0;
}